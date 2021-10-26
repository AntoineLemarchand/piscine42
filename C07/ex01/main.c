#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int *ft_range(int min, int max);

void exec(int min, int max,int size, char *answer)
{
	int i;
	int *range;

	i = 0;
	range = ft_range(min,max);
	while (i < size)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("should be %s\n", answer);
}

int	main(void)
{
	exec(3,8,5,"3 4 5 6 7");
	exec(-10,-4,6,"-10 -9 -8 -7 -6 -5");
	exec(-4,4,8,"-4 -3 -2 -1 0 1 2 3");
	write(1, "voila un segfault\n",18);
	exec(4,4,8,"shit");
}
