#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <openssl/sha.h>

#define MAX_KEY_LENGTH 65

void generate_key(const char *username, char *key)
{
	char input[MAX_KEY_LENGTH];
	unsigned char output[SHA256_DIGEST_LENGTH];

	snprintf(input, sizeof(input), "%s%s", username, "SALT_VALUE");
	SHA256((const unsigned char*)input, strlen(input), output);

	for (int i = 0; i < SHA256_DIGEST_LENGTH; i++)
	{
		snprintf(&key[i * 2], 3, "%02x", output[i]);
	}
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Usage: ./keygen5 username\n");
		return (1);
	}
	const char *username = argv[1];
	char key[MAX_KEY_LENGTH];

	generate_key(username, key);
	printf("Generated Key: %s\n", key);
	return (0);
}
