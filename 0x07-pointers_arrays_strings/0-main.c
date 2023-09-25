#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - Prints a buffer in hexadecimal format.
 * @buffer: The address of memory to print.
 * @size: The size of the memory to print.
 *
 * This function prints the content of the buffer in hexadecimal format.
 * It prints 10 values per line, separating them with a space.
 * After every 10 values, it adds a newline character for better readability.
 */

void simple_print_buffer(char *buffer, unsigned int size)
{
unsigned int i;
i = 0;
while (i < size)
{
if (i % 10)
{
printf(" ");
}
if (!(i % 10) && i)
{
printf("\n");
}
printf("0x%02x", buffer[i]);
i++;
}
printf("\n");
}

/**
 * main - Entry point of the program.
 *
 * This function initializes a buffer, prints it, modifies it using _memset,
 * and then prints it again.
 *
 * Return: Always 0.
 */

int main(void)
{
char buffer[98] = {0x00};
simple_print_buffer(buffer, 98);
_memset(buffer, 0x01, 95);
printf("-------------------------------------------------\n");
simple_print_buffer(buffer, 98);
return (0);
}

