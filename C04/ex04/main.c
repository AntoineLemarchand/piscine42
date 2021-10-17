#include<stdio.h>

int ft_putnbr_base(int nbr, char *base);

int main()
{
	int i1 = 42;

	printf("  ______ TESTS DE BASES ______\n\n");
	ft_putnbr_base(i1, "10-");
	printf(" should be nothing (invalid base)\n");
	ft_putnbr_base(i1, "");
	printf(" should be nothing (invalid base)\n");
	ft_putnbr_base(i1, "1");
	printf(" should be nothing (invalid base)\n\n");

	printf("___ AFFICHAGES DE CHIFFRES ___\n\n");
	ft_putnbr_base(i1, "10");
	printf(" should be 42\n\n");
	

	return (0);
}
