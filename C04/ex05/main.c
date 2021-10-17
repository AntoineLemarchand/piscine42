#include<stdio.h>

int ft_atoi_base(char *str, char *base);

int main()
{
	char *i1 = "42";
	char *int_max = "2147483647";
	char *int_min = "-2147483648";
	char *test_neg = "--+---134"; 
	char *test_pos = "--+--134"; 
	char *test_low = "3791d3521"; 

	printf("_______ TESTS DE BASES _______\n\n");
	printf("%i should be nothing (invalid base)\n", ft_atoi_base(i1, "10-"));
	printf("%i should be nothing (invalid base)\n", ft_atoi_base(i1, ""));
	printf("%i should be nothing (invalid base)\n\n", ft_atoi_base(i1, "1"));

	printf("___ AFFICHAGES DE CHIFFRES ___\n\n");
	printf("%i should be 42\n\n", ft_atoi_base(i1, "0123456789"));
	printf("%i should be 2147483647\n\n", ft_atoi_base(int_max, "0123456789"));
	printf("%i should be -2147483648\n\n", ft_atoi_base(int_min, "0123456789"));

	printf("___ AFFICHAGES SPECIAL ATOI ___\n\n");
	printf("%i should be -134\n\n", ft_atoi_base(test_neg, "0123456789"));
	printf("%i should be 134\n\n", ft_atoi_base(test_pos, "0123456789"));
	printf("%i should be 3791\n\n", ft_atoi_base(test_low, "0123456789"));
	printf("%i should be -2147483648\n\n", ft_atoi_base(int_min, "0123456789"));

	printf("_____ CHANGEMENT DE BASE _____\n\n");
	printf("%i should be 101010\n\n", ft_atoi_base(i1, "01"));
	printf("%i should be 1111111111111111111111111111111\n\n", ft_atoi_base(int_max, "01"));
	printf("%i should be -10000000000000000000000000000000\n\n", ft_atoi_base(int_min, "01"));
	printf("%i should be gytisyx\n\n", ft_atoi_base(int_max, "abcdefghijklmnopqrstuvwxyz"));

	return (0);
}
