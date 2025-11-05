
void ft_ultimate_ft(int ********nbr)
{
	int n1 = 42;
	int *n2 = &n1;
	int **n3 = &n2;
	int ***n4 = &n3;
	int ****n5 = &n4;
	int *****n6 = &n5;
	int ******n7 = &n6;
	int *******n8 = &n7;
	nbr = &n8;
}

// int main() { int ********pointr; ft_ultimate_ft(pointr); return 0; }
