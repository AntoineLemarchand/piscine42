#include<stdio.h>

int ft_sqrt(int nb);

void exec(int nb, int answer)
{
	printf("%i should be %i\n\n",ft_sqrt(nb),answer);
}

int main()
{
	exec(2,0);
	exec(13,0);
	exec(4,2);
	exec(2147395600,46340);
}
