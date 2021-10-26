#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

void exec(int min, int max, char *answer)
{
	int i;
	int **range;

	i = 0;
	ft_ultimate_range(range,min,max);
	while (range[0][i] != 0)
	{
		printf("%d ", range[0][i]);
		i++;
	}
	printf("should be %s\n", answer);
}

int	main(void)
{
	exec(3,8,"3 4 5 6 7");
	exec(-10,-4,"-10 -9 -8 -7 -6 -5");
}
