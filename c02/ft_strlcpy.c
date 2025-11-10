
unsigned int		ft_strlcpy(char* dest, char* src, unsigned int size)
{
	static unsigned int i, j;
	unsigned int srclen;
	
	if (src[0] == 0) srclen = 0;

	while (i <= size)
	{
		j = src[i];
		dest[i] = src[i];
	
		if (j == '\0')
		{
			dest[i] = '\0';
			break;
		}

		i++;
	}
	
	srclen = i; return srclen;
}


/*
int main()
{
	char src[] = "hello world!";
	char dest[] = "fuckyou zizek";

	unsigned int test = ft_strlcpy(dest, src, 13);

	printf("Dest: %s\n", dest);
	printf("Dest terminator: %d\n", dest[12]);
	printf("Srclen: %zu\n", test;
}
*/
