
#include <stdio.h>

void ft_sort_int_tab(int* tab, int size)
{
	printf("help");
	int i = 0, largest = tab[0], tab_sorted[size];

	while (i < size)
	{	
		if (largest <= tab[i]) 
		{
			largest = tab[i]; i++;
		}

		// else if (largest == tab[j])
		// tab[j] = 0;
	}

	// tab_sorted[i] = largest;
	// printf("largest: %d", largest);
	// i++;
}


int main()
{
	int arr[5] = {1, 4, 2, 99, 8};

	ft_sort_int_tab(arr, 5);

	return 0;
}
