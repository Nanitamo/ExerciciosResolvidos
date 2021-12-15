#include <stdio.h>
#include <stdlib.h>

#define TAM 4

int main()
{
	int mat[TAM][TAM];
	
	int i, j, cont = 0;

	printf("\n");
	
	printf("Informa os valores da matriz 1: \n");
	for (i = 0; i < TAM; i++)
	{
		for (j = 0; j < TAM; j++)
		{
			scanf("%d", &mat[i][j]);
			
			if(mat[i][j] > 10){
				cont++;
			}
		}
		printf("\n");
	}
	
	printf("A Matriz possui [ %d ] valor(es) maiores que 10", cont);
	
	return 0;
}
