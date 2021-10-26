#include<stdio.h>

int ft_atoi_base(char *str, char *base);

void exec(char *str, char *base, char *result)
{
	printf("%i should be %s\n", ft_atoi_base(str, base), result);
}

int main()
{
	char *i1 = "101010";
	char *int_max = "2147483647";
	char *int_min = "-2147483648";
	char *test_neg = "--+---134"; 
	char *test_pos = "--+--134"; 
	char *test_low = "3791d3521"; 
	char *test_letter = "g";
	char *test_letters = "gytisyx";

	printf("_______ TESTS DE BASES _______\n\n");
	exec(i1,"10-","0");
	exec(i1,"","0");
	exec(i1,"1","0");
	exec(i1,"12341","0");

	printf("___ AFFICHAGES DE CHIFFRES ___\n\n");
	exec(i1, "0123456789", i1);
	exec(int_max, "0123456789", int_max);
	exec(int_min, "0123456789", int_min);

	printf("___ AFFICHAGES SPECIAL ATOI ___\n\n");
	exec(test_neg, "0123456789","-134");
	exec(test_letter, "0123456789","-134");
	exec(test_pos, "0123456789","134");
	exec(test_low, "0123456789","3791");

	printf("_____ CHANGEMENT DE BASE _____\n\n");
	exec(i1, "01","42");
	exec(int_max, "01","2147483647");
	exec(int_min, "01","-2147483648");
	exec(test_letters,"abcdefghijklmnopqrstuvwxyz","2147483647");

	return (0);
}
