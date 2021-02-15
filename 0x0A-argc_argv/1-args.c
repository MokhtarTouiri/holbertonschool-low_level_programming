#include <stdio.h>
#define UNUSED(argv) (void)(argv)
/**
 *main - prints number
 *@argc : integer
 *@argv : pointer str
 *Return: 0
 */
int main(int argc, char *argv[])
{
	UNUSED(argv);
	printf("%d\n", argc - 1);
	return (0);
}
