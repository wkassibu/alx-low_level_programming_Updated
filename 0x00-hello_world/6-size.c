#include <stdio.h>

/**
 * main - print the string in the put function
 *
 * Description: using the main function
 * this program prints 'the sizes of the varible types and size'
 * Return: 0 (success)
 */
int main(void)
{
	char c;
	int a;
	long b;
	long long d;
	float f;

		printf("Size of a char: %ld byte(s)\n", sizeof(c));
		printf("Size of an int: %ld byte(s)\n", sizeof(a));
		printf("Size of a long int: %ld byte(s)\n", sizeof(b));
		printf("Size of a long long int: %ld byte(s)\n", sizeof(d));
		printf("Size of a float: %ld byte(s)\n", sizeof(f));
		return (0);
}
