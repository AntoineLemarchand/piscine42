#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

void exec(int size, char **strs, char *sep,char)
{
	printf("%s\n\n", ft_strjoin(size,strs,sep));
}

int main(int ac, char **av)
{
	exec(ac, strs, "1234");
	return(0);
}
