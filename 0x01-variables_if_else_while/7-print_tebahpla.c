#include <stdio.h>
/**
 *main - prints the alphabet
 *Return: 0
 */
int main(void)
{
int i;
for (i = 'z'; i >= 'a'; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
