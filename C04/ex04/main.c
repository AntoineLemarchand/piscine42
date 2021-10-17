#include<stdio.h>

int ft_putnbr_base(int nbr, char *base);

int main()
{
	int i1 = 42;
	int int_max = 2147483647;
	int int_min = -2147483648;

	printf("_______ TESTS DE BASES _______\n\n");
	ft_putnbr_base(i1, "10-");
	printf(" should be nothing (invalid base)\n");
	ft_putnbr_base(i1, "");
	printf(" should be nothing (invalid base)\n");
	ft_putnbr_base(i1, "1");
	printf(" should be nothing (invalid base)\n\n");

	printf("___ AFFICHAGES DE CHIFFRES ___\n\n");
	ft_putnbr_base(i1, "0123456789");
	printf(" should be 42\n\n");
	ft_putnbr_base(-i1, "0123456789");
	printf(" should be -42\n\n");
	ft_putnbr_base(int_max, "0123456789");
	printf(" should be 2147483647\n\n");
	ft_putnbr_base(int_min, "0123456789");
	printf(" should be -2147483648\n\n");

	printf("_____ CHANGEMENT DE BASE _____\n\n");
	ft_putnbr_base(i1, "01");
	printf(" should be 101010\n\n");
	ft_putnbr_base(-i1, "01");
	printf(" should be -101010\n\n");
	ft_putnbr_base(int_max, "01");
	printf(" should be 1111111111111111111111111111111\n\n");
	ft_putnbr_base(int_min, "01");
	printf(" should be -10000000000000000000000000000000\n\n");
	ft_putnbr_base(int_max, "abcdefghijklmnopqrstuvwxyz");
	printf(" should be gytisyx\n\n");

	return (0);
}
