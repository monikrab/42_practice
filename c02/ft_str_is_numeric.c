
int		ft_str_is_numeric(char* str)
{
	char numeric;

	int i = 0;
	while (1)
	{
		numeric = str[i];

		if (numeric == 0) return 1;

		if (numeric < 48 || numeric > 57) { return 0; }
		else i++;
	}
}

/* int main()
{
	char s[] = "";

	int Aa; Aa = ft_str_is_numeric(s);
	printf("%d", Aa); 
} */
