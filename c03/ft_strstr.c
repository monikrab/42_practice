
char*		ft_strstr(char* str, char* to_find)
{
	int i = 0, j = 0;

	while (str[i] != to_find[j]) i++;

	while (str[i] != '\0')
	{
		to_find[j] = str[i];
		j++; i++;
	}

	return to_find;
}


/* int main()
{
	char s1[] = "Donald John Trump";
	char s2[11] = "John";

	printf("%s", ft_strstr(s1, s2));
} */
