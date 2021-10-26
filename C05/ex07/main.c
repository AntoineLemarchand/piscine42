#include <stdio.h>

int ft_find_next_prime(int nb);

void exec(int nb, int answer)
{
	printf("%i should be %i\n\n", ft_find_next_prime(nb), answer);
}

int main()
{
	//exec(1,2);
	//exec(2,3);
	//exec(4,5);
	//exec(37,41);
	//exec(48,53);
	//exec(56,59);
	//exec(84,89);
	//exec(80,83);
	//exec(100,101);
	//exec(-2,2);
	//exec(64348431,2);
	//exec(2147483630,2147483647);
	exec(0, 2);
	exec(1, 2);
	exec(2, 2);
	return (0);
}
