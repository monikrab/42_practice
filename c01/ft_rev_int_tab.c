
void		ft_rev_int_tab(int* tab, int size)
{
	int rev_tab[size],
	i = (size - 1), /* array indexing starts at 0 */
	j = 0;
	
	while (i >= 0)
	{
		rev_tab[j] = tab[i];
		i--, j++;
	}
}

/* int main()
{
	int arr[7] = {1, 5, 2, 1, 5, 8, 9};

	ft_rev_int_tab(arr, 7);

	return 0;
} */
