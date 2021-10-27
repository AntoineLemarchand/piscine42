#include<stdio.h>

char **ft_split(char *str, char *charset);

void exec(char *str,char *charset)
{
	int	i;

	i = 0;
	char **test = ft_split(str,charset);
	while (test[i][0] != 0)
	{
		printf("%i - %s\n",i, test[i]);
		i++;
	}
}

int main(int ac, char **av)
{
	(void)ac;
	exec(av[1],av[2]);
	return(0);
}
