
void		ft_div_mod(int *a, int *b, int* div, int* mod)
{
	*mod = *a % *b;
	*div = *a / *b;
}

/* int main()
{
	int Aa = 0; int Bb = 0;
	int Div = 0; int Mod = 0;

	int* a = &Aa;
	int* b = &Bb;
	int* div = &Div;
	int* mod = &Mod;

	ft_div_mod(a, b, div, mod);

	return 0;
} */
