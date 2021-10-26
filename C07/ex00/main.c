#include <stdio.h>
#include <bsd/string.h>

char *ft_strdup(char *src);

void exec(char *src)
{
	printf("%s  |  %s", ft_strdup(src), strdup(src));
}

int main()
{
	exec("coucou");
	exec("");
	return (0);
}
