
char*		ft_strcat(char* src, char* dest)
{
	int i = 0, j = 0;
	while (1)
	{
		while (src[i] == '\0')
		{
			src[i] = dest[j];
			j++; i++;

			if (dest[j] == '\0') return src;
		}
		
		i++;
	}
}	


int main()
{
	char s1[100] = "It's free ";
	char s2[] = "now!";

	printf("%s\n", ft_strcat(s1, s2));
}
