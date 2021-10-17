#include<stdio.h>
#include<string.h>

char *ft_strcat(char *dest, char *src);

int main()
{
	char *src1 = "aaaa";
	char *src2 = "bbbbbbbb";
	char dest1[8] = "bbbb";
	char dest2[16] = "cccccccc";
	char dest3[4] = "dd";

	printf("%s  |  %s\n", strcat(dest1, src1), ft_strcat(dest1,src1));
	printf("%s  |  %s\n", strcat(dest2,src2), ft_strcat(dest2,src2));
	printf("%s  |  %s\n", strcat(dest2,src1), ft_strcat(dest2,src1));
	printf("%s  |  %s\n", strcat(dest3,src1), ft_strcat(dest3,src1));
	return (0);
}
