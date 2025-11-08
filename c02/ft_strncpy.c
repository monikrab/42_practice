
#include <stdio.h>

char*		ft_strncpy(char* dest, char* src, unsigned int n)
{
	static int i, j;

	while (i < n)
	{
		j = src[i];
		dest[i] = src[i];
	
		if (j == 0) break;

		i++;
	}
	
	return dest;
}

/**/
int main()
{
	char s1[] = "hello";
	char s2[6]; 

	ft_strncpy(s2, s1, 4);

	printf("%s", s2);
}
