
void ft_swap(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b; // (a ^ b) ^ b = a
	*a = *a ^ *b; // (a ^ b) ^ b (new value, so the original a) = b
}

/* int main()
{
	int Aa = 5; int Bb = 9;
	
	int* a = &Aa;
	int* b = &Bb;
	
	ft_swap(a, b);
	return 0;
} */
