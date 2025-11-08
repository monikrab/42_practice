
int		ft_str_is_printable(char* str)
{
	char printable;

	int i = 0;
	while (1)
	{
		printable = str[i];

		if (printable == 0) return 1;

		if (printable < 32 || printable > 126) { return 0; }
		else i++;
	}
}

/* int main()
{
	char s[] = "wadpWwjld";

	int Aa; Aa = ft_str_is_printable(s);
	printf("%d", Aa); 
} */
