
char*		ft_strupcase(char* str)
{
	int i = 0;
	while (1)
	{		
		if (str[i] == '\0') break;

		if (str[i] > 97 && str[i] < 122)
		{
			str[i] -= 32;
		}

		i++;
	}

	return str;
}


/*
int main()
{
	char str[] = "heLlo";

	ft_strupcase(str);

	printf("string: %s", str);
}
*/
