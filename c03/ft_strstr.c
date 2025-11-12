
char*		ft_strstr(char* str, char* to_find)
{
	int i = 0, j = 0;

	if (to_find[0] == '\0') return str; // String empty

	while (str[i] != '\0')
	{
		if (to_find[j] == str[i]) i++, j++; // Char in common, inc both

		else if (to_find[j] == '\0') // Check if finished iterating over to_find
		{
			while (str[i])
			{
				to_find[j] = str[i]; // Fill to_find with the rest of str after its first occurence
				i++, j++;
			}
		}

		else if (i > 0 && to_find[j - 1] == str[i - 1]) i++, j = 0; // Reset to_find to 0 if incomplete string found

		else i++; // No char in common, leave to_find at 0
	}

	if (str[i] == to_find[j]) return to_find; // If both ended on \0, return to_find and exit

	return NULL; // String not found
}


// int main()
// {
// 	char s1[] = "Madow Mawod";
// 	char s2[30] = "wod";

// 	printf("%s", ft_strstr(s1, s2));
// } 
