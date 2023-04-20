#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_c - Prints a character
 * @valist: A va_list containing the argument to print
 *
 * Return: Nothing
 */
void print_c(va_list valist)
{
    printf("%c", va_arg(valist, int));
}

/**
 * print_i - Prints an integer
 * @valist: A va_list containing the argument to print
 *
 * Return: Nothing
 */
void print_i(va_list valist)
{
    printf("%d", va_arg(valist, int));
}

/**
 * print_f - Prints a float
 * @valist: A va_list containing the argument to print
 *
 * Return: Nothing
 */
void print_f(va_list valist)
{
    printf("%f", va_arg(valist, double));
}

/**
 * print_s - Prints a string
 * @valist: A va_list containing the argument to print
 *
 * Return: Nothing
 */
void print_s(va_list valist)
{
    char *str = va_arg(valist, char *);

    if (str == NULL)
        printf("(nil)");
    else
        printf("%s", str);
}

/**
 * print_all - Prints anything
 * @format: A list of types of arguments passed to the function
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
    va_list valist;
    int i = 0, j;
    char *separator = "";
    print_t p[] = {
        {"c", print_c},
        {"i", print_i},
        {"f", print_f},
        {"s", print_s},
        {NULL, NULL}
    };

    va_start(valist, format);

    while (format && format[i])
    {
        j = 0;
        while (p[j].fmt)
        {
            if (*(p[j].fmt) == format[i])
            {
                printf("%s", separator);
                p[j].printer(valist);
                separator = ", ";
                break;
            }
            j++;
        }
        i++;
    }
    printf("\n");
    va_end(valist);
}
