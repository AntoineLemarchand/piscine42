#include<stdio.h>
#include<string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	char *a = "dapdiadjojofpojf";
	char *b = "dapdiaejojofpojf";
	char *c = "dap0iaejojofpojf";

	printf("%i  |  %i\n", strncmp(a,b,8), ft_strncmp(a,b,8));
	printf("%i  |  %i\n", strncmp(a,b,3), ft_strncmp(a,b,3));
	printf("%i  |  %i\n", strncmp(b,c,5), ft_strncmp(b,c,5));
	printf("%i  |  %i\n", strncmp(b,c,2), ft_strncmp(b,c,2));
	printf("%i  |  %i\n", strncmp(a,c,2), ft_strncmp(a,a,2));
	printf("%i  |  %i\n", strncmp(a,c,12), ft_strncmp(a,c,12));
	return (0);
}
