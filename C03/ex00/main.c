#include<stdio.h>
#include<string.h>

int ft_strcmp(char *s1, char *s2);

int main()
{
	char *a = "dapdiadjojofpojf";
	char *b = "dapdiaejojofpojf";
	char *c = "dap0iaejojofpojf";

	printf("%i  |  %i\n", strcmp(a,b), ft_strcmp(a,b));
	printf("%i  |  %i\n", strcmp(b,c), ft_strcmp(b,c));
	printf("%i  |  %i\n", strcmp(a,a), ft_strcmp(a,a));
	return (0);
}
