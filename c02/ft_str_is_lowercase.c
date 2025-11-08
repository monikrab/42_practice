
int		ft_str_is_lowercase(char* str)
{
	char lowercase;

	int i = 0;
	while (1)
	{
		lowercase = str[i];

		if (lowercase == 0) return 1;

		if (lowercase < 97 || lowercase > 122) { return 0; }
		else i++;
	}
}

/* int main()
{
	char s[] = "wadpWwjld";

	int Aa; Aa = ft_str_is_lowercase(s);
	printf("%d", Aa); 
} */
