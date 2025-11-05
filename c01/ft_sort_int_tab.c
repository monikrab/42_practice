
#include <stdio.h>

void ft_sort_int_tab(int* tab, int size)
{
	static int rcount;
	int i = 0, largest = tab[0], tab_sorted[size];

	while (i < size)
	{
		if (largest < tab[i])
			largest = tab[i]; i++;
	}

	while (i > 0)
	{
		if (largest == tab[i - 1])
			tab[i - 1] = 0; i--;
	}

	if (((size - 1) - rcount) != -1)
		tab_sorted[(size - 1) - rcount] = largest;
		
	if (largest != 0 && ((size - 1) - rcount) != -1)
		{ rcount++; ft_sort_int_tab(tab, size); }
}


int main()
{
	int arr[5] = {1, 4, 2, 99, 8};

	ft_sort_int_tab(arr, 5);

	return 0;
}
