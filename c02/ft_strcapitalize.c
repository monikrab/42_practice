
char*		ft_strcapitalize(char* str)
{
	int i = 0;

	if (str[i] > 96 && str[i] < 123) str[i] -= 32; i++;

	while (1)
	{
		if (str[i] == '\0') break;
		
		if (str[i] > 96 && str[i] < 123) // check if str[i] is lowercase
		{
			if (str[i - 1] < 97 || str[i - 1] > 122) // check if char before str[i] is not lowercase
			{
				if (str[i - 1] < 65 || str[i - 1] > 90) // check if char before str[i] is not lowercase
				{
					if (str[i - 1] < 48 || str[i - 1] > 57) // check if char before str[i] is not lowercase
					{
						str[i] -= 32;
					}
				}
			}
		}
		
		i++;
	}

	return str;
}


/*
int main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", str);

	ft_strcapitalize(str);

	printf("%s", str);
}
*/
