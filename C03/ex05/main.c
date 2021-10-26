#include<bsd/string.h>
#include<stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

void exec(char *dest1, char *dest2, char *src, unsigned int size)
{
	printf("strlcat       : %li  -  %s\n", strlcat(dest1, src, size),dest1);
	printf("ft_strlcat    : %i  -  %s\n", ft_strlcat(dest2, src, size),dest2);
}

int main()
{
	char	dest1[50] = "QGBQLJVWMDKQTBXIXMV";
	char	dest2[50] = "QGBQLJVWMDKQTBXIXMV";
	exec(dest1, dest2, "SMBUCJIS", 50);

	exec(dest1, dest2, "World", 50);

	exec(dest1, dest2, " I ", 8);

	exec(dest1, dest2, "am ", 2);

	exec(dest1, dest2, "alive dkhjbhkagdn;afdhjadnguadacvytdalg", 75);

	exec(dest1, dest2, "yeah!", 0);
	return (0);
}
