#include <stdio.h>

#include "header.h"


int main(int argc, char **argv)
{
	char str[] = "string to compare";

	printf("GIT WORKSHOP!\n");
	printf("ft_strlen: %i\n", ft_strlen(argv[1]));
	printf("ft_putchar: ");
	ft_putchar(argv[1][0]);
	printf("\n");
    printf("ft_strcmp: %d\n", ft_strcmp(argv[1], str));
    ft_split(argv[1], ' ');
    printf("ft_split:\n");
	return (0);
}


