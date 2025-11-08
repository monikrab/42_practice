
int		ft_str_is_alpha(char* str)
{
	char alpha;

	int i = 0;
	while (1)
	{
		alpha = str[i];

		if (alpha == 0) return 1;

		if (alpha < 65 || alpha > 90)
		{
			if (alpha < 97 || alpha > 122) return 0;

			else i++;
		}
	}
}

/*
int main()
{
	char s[] = "";

	int Aa; Aa = ft_str_is_alpha(s); printf("%d", Aa); 
}
*/
