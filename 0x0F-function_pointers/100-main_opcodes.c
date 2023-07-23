#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - prints opcodes of specified address and size
 * @address: address of data whose opcode is to be printed
 * @size: number of bytes of data whose opcode is to be printed
 *
 * Return: void
 */
void print_opcodes(unsigned char *address, int size)
{
	int i;

	for (i = 0; i < size; i++)
		printf("%02x ", address[i]);

	printf("\n");
}

/**
 * main - print opcodes of main
 * @argc: argument count
 * @argv: argument vector - bytes of data in function whose opcodes
 * are to be printed
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc > 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	unsigned char *main_address = (unsigned char *)&main;

	int main_size = atoi(argv[1]);

	print_opcodes(main_address, main_size);

	return (0);
}
