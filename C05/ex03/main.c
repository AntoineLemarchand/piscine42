#include <stdio.h>

int ft_recursive_power(int nb, int power);

void exec(int nb, int power, int answer)
{
	printf("%i should be %i\n", ft_recursive_power(nb,power),answer);
}

int main()
{
	exec(2,-5,0);
	exec(2,1,2);
	exec(2,5,32);
	exec(7,8,5764801);
	exec(-0,3,0);
	exec(0,3,0);
	return(0);
}
