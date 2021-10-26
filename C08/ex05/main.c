#include<stdio.h>
#include"ft_stock_str.h"
void ft_show_tab(struct s_stock_str *par);

int main()
{
	struct s_stock_str a[3];
	a[0].size = 2;
	a[0].str = "42";
	a[0].copy = "42a";
	a[1].size = 5;
	a[1].str = "Hello";
	a[1].copy = "Holle";
	a[2].size = 1;
	a[2].str = 0;
	a[2].copy = "yeah !";
	

	ft_show_tab(a);
	return(0);
}
