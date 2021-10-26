#include<stdio.h>
#include<string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	char *src1 = "aaaa";
	char *src2 = "bbbbbbbb";
	char dest1[8] = "bbbb";
	char dest2[16] = "cccccccc";
	char dest3[4] = "dd";

	printf("%s  |  %s\n", strncat(dest1,src1,2), ft_strncat(dest1,src1,2));
	printf("%s  |  %s\n", strncat(dest2,src2,5), ft_strncat(dest2,src2,5));
	printf("%s  |  %s\n", strncat(dest2,src1,3), ft_strncat(dest2,src1,3));
	printf("%s  |  %s\n", strncat(dest3,src1,3), ft_strncat(dest3,src1,3));
	return (0);
}
