
#include <unistd.h>

void ft_putnbr(int nb)
{
	static int nb_len, tmp_nb, nb_clone;

	if (nb > 0) { tmp_nb = nb; nb_clone = nb; }
	if (nb < 0) { tmp_nb = -(nb); nb_clone = -(nb); }
	if (nb == 0) { write(1, "0", 1); return; }

	// Get length of nb
	while (tmp_nb > 0)
	{
		tmp_nb /= 10;
		nb_len++;
	}

	// Turn nb into an array
	char nb_arr[10];
	int i = nb_len;
	while (i >= 1)
	{		
		nb_arr[i] = nb_clone % 10;
		nb_clone /= 10;
		i--;
	}

	// Write each char in nb_arr
	int j = 1;
	while (j <= nb_len)
	{
		char put_char = (nb_arr[j] + 48);
		write(1, &put_char, 1);
		j++;
	}
}
