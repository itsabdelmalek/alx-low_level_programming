#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list, safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *temp;

	while (head)
	{
		count++;
		temp = head;
		head = head->next;
		print_address((void *)temp);
		print_number(temp->n);
		_putchar('\n');
		if (temp <= head)
		{
			print_arrow((void *)head);
			print_number(head->n);
			_putchar('\n');
			break;
		}
	}
	return (count);
}

/**
 * print_address - Prints the memory address in hexadecimal form.
 * @addr: The address to print.
 */
void print_address(void *addr)
{
	unsigned long int address = (unsigned long int)addr;
	unsigned long int divisor = 16;
	int digit, remainder, leading_zeroes = 0;

	_putchar('[');
	_putchar('0');
	_putchar('x');
	if (address == 0)
	{
		_putchar('0');
	}
	else
	{
		while (address / divisor > 0)
			divisor *= 16;
		divisor /= 16;
		while (divisor > 0)
		{
			digit = address / divisor;
			remainder = address % divisor;
			address = remainder;
			divisor /= 16;
			if (digit > 0 || leading_zeroes || divisor == 0)
			{
				leading_zeroes = 1;
				if (digit < 10)
					_putchar(digit + '0');
				else
					_putchar(digit - 10 + 'a');
			}
		}
	}
	_putchar(']');
}

/**
 * print_number - Prints an integer.
 * @n: The integer to print.
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar(num % 10 + '0');
}

/**
 * print_arrow - Prints an arrow symbol followed by a
 * memory address in hexadecimal form.
 * @addr: The address to print.
 */
void print_arrow(void *addr)
{
	_putchar('-');
	_putchar('>');
	print_address(addr);
}
