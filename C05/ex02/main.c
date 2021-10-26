#include <stdio.h>

int ft_iterative_power(int nb, int power);

void exec(int nb, int power, int answer)
{
	printf("%i should be %i\n", ft_iterative_power(nb,power),answer);
}

int main()
{
	exec(0,3,0);
	exec(2,-5,0);
	exec(2,1,2);
	exec(2,5,32);
	exec(7,8,5764801);
	exec(-15,3,-3375);
	exec(-15,4,50625);
	exec(104982635,0,1);
	exec(104982635,1,104982635);
	exec(-104982635,1,-104982635);
	printf("___TRACE___\n");
	exec(-0,3,0);
	exec(3129,0,3129);
	return(0);
}
