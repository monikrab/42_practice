
#include <unistd.h>

void		ft_putstr(char *str)
{
	int i = 0;
	while (str[i] >= 32 && str[i] <= 126)
	{
		write(1, &str[i], 1), i++;
	}
}

/* int main()
{
	char str[12] = {'H', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '!'};

	ft_putstr(str);

	return 0; 
} */
