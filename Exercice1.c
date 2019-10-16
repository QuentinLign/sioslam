#include <stdio.h>

int main (void)
{
	int n, i, tab[6];

	for (i=0 ; i<7; i = i + 1)
	{
		printf("Entrez element %d ", i);
		scanf("%d", &tab[i]);
		
	}	
	
	for (i=0 ; i<7; i = i + 1)
	{
		printf("element %d vaut %d\n ", i, tab[i]);		
		
	}
	return 1;
	
}
