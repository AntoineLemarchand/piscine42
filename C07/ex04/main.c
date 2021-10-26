#include<stdio.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

void exec(char *nbr, char *base_from, char *base_to, *char answer)
{
	char *a = ft_convert_base;
	printf("%s should be %s",a);
}

int main()
{
	exec("2147483647","012346789","0123456789abcdef","7FFFFFFF");
	exec("-2147483648","012346789","0123456789abcdef","-80000000");
	return(0);
}
