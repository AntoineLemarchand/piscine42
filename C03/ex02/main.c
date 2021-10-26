#include<stdio.h>
#include<bsd/string.h>

char *ft_strcat(char *dest, char *src);

int main()
{
	char *src1 = "aaaa";
	char *src2 = "bbbbbbbb";
	char dest1[8] = "bbbb";
	char dest2[16] = "cccccccc";
	char dest3[4] = "dd";
	char dest4[20] = "ACAB";
	char dest5[50] = "";
	char src[5] = "1312";

	printf("%s  |  %s\n", strcat(dest4,src), ft_strcat(dest4,src));
	printf("%s  |  %s\n", strcat(dest1,src1), ft_strcat(dest1,src1));
	printf("%s  |  %s\n", strcat(dest2,src2), ft_strcat(dest2,src2));
	printf("%s  |  %s\n", strcat(dest2,src1), ft_strcat(dest2,src1));
	printf("%s  |  %s\n", strcat(dest3,src1), ft_strcat(dest3,src1));
	printf("%s  |  %s\n", strcat(dest5,src1), ft_strcat(dest5,src1));
	return (0);
}
