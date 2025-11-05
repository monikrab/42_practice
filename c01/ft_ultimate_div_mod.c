
void		ft_ultimate_div_mod(int *a, int* b)
{
	auto int* a_cp = &(int){*a};
	
	*a = *a / *b;
	*b = *a_cp % *b;
}

/* int main()
{
	int Aa = 15321, Bb = 953;
	int* a = &Aa, *b = &Bb;
	ft_ultimate_div_mod(a, b);

	return 0;
} */ 
