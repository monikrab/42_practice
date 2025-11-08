
char*		ft_strcpy(char* dest, char* src)
{
	static int i, j;

	while (1)
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
	char string[6] = "hello";
	char string_2[6];

	ft_strcpy(string_2, string);

	printf("%s", string_2);
}
*/
