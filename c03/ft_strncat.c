
char*		ft_strncat(char* src, char* dest, unsigned int nb)
{
	int i = 0; unsigned int j = 0;
	while (1)
	{
		while (src[i] == '\0')
		{
			src[i] = dest[j];
			j++; i++;

			if (j == nb - 1) return src;
			else if (dest[j] == '\0') return src;
		}
		
		i++;
	}
}	


/* int main()
{
	char s1[100] = "It's free ";
	char s2[] = "now!";

	printf("%s\n", ft_strncat(s1, s2, 3));
} */
