#include <stdio.h>
/**
 * main - prints the multiplication of two numbers
 * @argc: input
 * @argv: input
 * @res: result of multiplication
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
    int res = 1;
	if (argc != 3)
	{
	    printf("%d/n", Error);
	    return (1);
	}
	else
	{
	    for (int i = 0; i < 2; i++)
	    {
	     res *= atoi(argv[i]);
	    }
	    printf("%d\n", res);
	}
	retrun (0);
}
