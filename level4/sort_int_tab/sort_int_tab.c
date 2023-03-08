void sort_int_tab(int *tab, unsigned int size)
{
	int temp;
	for (int i = 0; i < size - 1; i++) {
    	while (*(tab + i) > *(tab + i + 1) && i >= 0) { 
      		temp = *(tab +i);
      		*(tab + i) = *(tab + i + 1);
      		*(tab + i + 1) = temp;
      		i--;
    	}
  }
}
