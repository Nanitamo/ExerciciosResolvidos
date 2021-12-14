#include <stdio.h>
#include <stdlib.h>
#define TAM 4

int main()
{

	int matrix[TAM][TAM];
	int i, j;

	
	for (i = 0; i < TAM; i++)
	{
		for (j = 0; j < TAM; j++)
		{
			printf("Valores da matriz: ");
			scanf("%d", &matrix[i][j]);
		}
		printf("\n");
	}

	int maior = matrix[0][0];
	int posI ;
	int posJ ;

	for (i = 0; i < TAM; i++)
	{
		for (j = 0; j < TAM; j++)
		{
			if (matrix[i][j] > maior)
			{
				maior = matrix[i][j];
				posI = i;
				posJ = j;
			}
		}
	}
	
	for (i = 0; i < TAM; i++)
	{
		for (j = 0; j < TAM; j++)
		{
			printf(" %d ", matrix[i][j]);
			
		}
		printf("\n");
	}

	printf("O maior numero da matriz eh: %d [linha %d][coluna %d].\n", maior, posI, posJ);
	
	return 0;

}