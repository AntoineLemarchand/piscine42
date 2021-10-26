#include<stdio.h>
#include<string.h>

char *ft_strstr(char *str, char *to_find);

void exec(char *str, char *to_find)
{
	printf("%s  |  %s\n", strstr(str,to_find), ft_strstr(str,to_find));
}

int main()
{
	exec("qqqqqqqAqqqqqqqLqqqqqqALgggg","AL");
	exec("oignon","gn");
	exec("oignon","ignn");
	exec("oignon","");
	exec("oignon","\0");
	exec("","");
	exec("odgaudgiagdiHOdoagodgaGdhaoihdGL","OG");
	exec("oignonfnonfnono","nono");
	exec("non","oignonfnonfnono");
	return (0);
}
