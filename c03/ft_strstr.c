
char*		ft_strstr(char* str, char* to_find)
{
	int i = 0, j = 0;

	while (str[i] != to_find[j]) i++;

	
	while (1)
	{
		if (str[i] == to_find[j])
		{
			if (str[i] != '\0')
			{
				to_find[j] = str[i];
			}
			j++; i++;
		}
		else return to_find;
	}
	return to_find;
}


/* int main()
{
	char s1[] = "Madonna Madowwa";
	char s2[30] = "dowwa";

	printf("%s", ft_strstr(s1, s2));
} */
