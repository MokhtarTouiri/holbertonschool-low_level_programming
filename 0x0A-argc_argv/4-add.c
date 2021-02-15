#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add numbers
 * @argc: number of arguments
 * @argv: argument vector of pointers to strings
 * Return: 0
 */
int main(int argc, char const *argv[])
{
int i, j, sum = 0;

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (!isdigit(argv[i][j]))
{
puts("Error");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
