#include <stdio.h>

int ft_is_prime(int nb);

void exec(int nb, int answer)
{
	printf("%i should be %i\n\n", ft_is_prime(nb), answer);
}

int main()
{
	exec(2,1);
	exec(37,1);
	exec(47,1);
	exec(53,1);
	exec(83,1);
	exec(79,1);
	exec(97,1);
	exec(1,0);
	exec(4,0);
	exec(10,0);
	exec(40,0);
	exec(44,0);
	exec(50,0);
	exec(85,0);
	exec(100,0);
	exec(-2,0);
	exec(-37,0);
	exec(-83,0);
	exec(-40,0);
	exec(2147483647,1);
	return (0);
}
