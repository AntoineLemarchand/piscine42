#include<stdio.h>

int ft_atoi(char *str);

int main()
{
	char *i = "1";
	printf("%i should be 1\t\n\n",ft_atoi(i));
	char *i3 = "150820";
	printf("%i should be 150820\n\n",ft_atoi(i3));
	char *i4 = "2147483647";
	printf("%i should be 2147483647\n\n",ft_atoi(i4));
	char *i5 = "-1";
	printf("%i should be -1\n\n",ft_atoi(i5));
	char *i7 = "-150820";
	printf("%i should be -150820\n\n",ft_atoi(i7));
	char *i8 = "-2147483648";
	printf("%i should be -2147483648\n\n",ft_atoi(i8));
	char *i9 = "  ---+--+1234ab567";
	printf("%i should be -1234\n\n",ft_atoi(i9));
}
