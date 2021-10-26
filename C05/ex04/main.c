#include <stdio.h>

int ft_fibonacci(int index);

void exec(int index, int answer)
{
	printf("%i should be %i \n\n",ft_fibonacci(index), answer);
}

int main()
{
	exec(0,0);
	exec(1,1);
	exec(2,1);
	exec(3,2);
	exec(10,55);
	exec(12,144);
	exec(25,75025);
	printf("___TRACE___\n");
	exec(-4143, -1);
	return (0);
}
