#include <stdio.h>

int ft_iterative_factorial(int nb);

void exec(int nb, int answer)
{
	printf("%i should be %i\n",ft_iterative_factorial(nb),answer);
}

int main()
{
	exec(-5,0);
	exec(0,1);
	exec(2,2);
	exec(5,120);
	exec(10,3628800);
	return (0);
}
