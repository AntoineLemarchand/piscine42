#include<stdio.h>
#include<stdlib.h>

int ft_atoi(char *str);

int main()
{
	char *i = "1";
	printf("%i should be %i\t\n\n",ft_atoi(i),atoi(i));
	char *i3 = "150820";
	printf("%i should be %i\n\n",ft_atoi(i3),atoi(i3));
	char *i11 = "2147483647";
	printf("%i should be %i\n\n",ft_atoi(i11),atoi(i11));
	char *i4 = "214736183483647";
	printf("%i should be %i\n\n",ft_atoi(i4),atoi(i4));
	char *i5 = "-1";
	printf("%i should be %i\n\n",ft_atoi(i5),atoi(i5));
	char *i7 = "-150820";
	printf("%i should be %i\n\n",ft_atoi(i7),atoi(i7));
	char *i8 = "-2147483648";
	printf("%i should be %i\n\n",ft_atoi(i8),atoi(i8));
	char *i9 = "  ---+--+1234ab567";
	printf("%i should be %i\n\n",ft_atoi(i9),atoi(i9));
	char *i10 = "  ---+--+x1234ab567";
	printf("%i should be %i\n\n",ft_atoi(i10),atoi(i10));
	return (0);
}
