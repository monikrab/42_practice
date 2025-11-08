
int		ft_str_is_uppercase(char* str)
{
	char uppercase;

	int i = 0;
	while (1)
	{
		uppercase = str[i];

		if (uppercase == 0) return 1;

		if (uppercase < 65 || uppercase > 90) { return 0; }
		else i++;
	}
}

/* int main()
{
	char s[] = "wadpWwjld";

	int Aa; Aa = ft_str_is_uppercase(s);
	printf("%d", Aa); 
} */
