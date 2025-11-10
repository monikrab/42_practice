
char*		ft_strlowcase(char* str)
{
	int i = 0;
	while (1)
	{		
		if (str[i] == '\0') break;

		if (str[i] > 64 && str[i] < 91)
		{
			str[i] += 32;
		}

		i++;
	}

	return str;
}



/* int main()
{
	char str[] = "HElLO";

	ft_strlowcase(str);

	printf("string: %s", str);
}
*/
