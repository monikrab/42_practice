
#include <unistd.h>

void ft_print_comb2(void)
{
	static int Aa, Bb;

	int i = 1;
	while (1)
	{
		Bb++;

		if (Bb > Aa)
		{
			char Aa_tens = 48 + (Aa / 10);
			char Aa_ones = 48 + (Aa % 10);

			char Bb_tens = 48 + (Bb / 10);
			char Bb_ones = 48 + (Bb % 10);

			write(1, &Aa_tens, 1);
			write(1, &Aa_ones, 1);
			write(1, " ", 1);			
			write(1, &Bb_tens, 1);
			write(1, &Bb_ones, 1);
			write(1, ", ", 2);
		}

		if (Bb == 99)
		{
			Bb = 1 + (i / 100); Aa++;

			if (Aa == 99) break;
		}
		
		i++;
	}
}


int main()
{
	ft_print_comb2(); return 0;
}
