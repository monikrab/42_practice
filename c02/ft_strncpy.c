
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

/*
int main()
{
	char s1[] = "hello";
	char s2[] = "byeby world!"; 

	ft_strncpy(s2, s1, 5);

	printf("%s", s2);
}
*/
