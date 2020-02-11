#include "ft_printf.h"
#include <stdio.h>

int main (void)
{
	int i;

	i = -29;
    ft_printf ("lol % kkkk\n", &i);
	printf ("lol % kkkk\n", &i);
}
