
#include <unistd.h>

int		ft_strlen(char *str)
{
	int i = 0;
	while (str[i] >= 32 && str[i] <= 126) i++;

	return i;
}

/* int main()
{
	char str[3] = {'a', 'b', 'c'};
	int len = ft_strlen(str); printf("%d", len);

	return 0; 
} */
