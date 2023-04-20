#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{
    va_list args;
    va_start(args, format);

    char c;
    int i;
    float f;
    char* s;
    char* sep = "";

    while (*format != '\0') {
        if (*format == 'c') {
            c = (char) va_arg(args, int);
            printf("%s%c", sep, c);
        } else if (*format == 'i') {
            i = va_arg(args, int);
            printf("%s%d", sep, i);
        } else if (*format == 'f') {
            f = (float) va_arg(args, double);
            printf("%s%f", sep, f);
        } else if (*format == 's') {
            s = va_arg(args, char*);
            if (s == NULL) {
                printf("%s(nil)", sep);
            } else {
                printf("%s%s", sep, s);
            }
        }
        format++;
        sep = ", ";
    }
    printf("\n");
    va_end(args);
}
