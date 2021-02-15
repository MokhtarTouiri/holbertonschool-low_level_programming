#include <stdio.h>
/**
 *main -  prints name
 *@argc : integer
 *@argv : pointer str
 *Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[0]);
	return (0);
}
