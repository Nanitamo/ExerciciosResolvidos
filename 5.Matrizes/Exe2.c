#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main()
{
	int mat[TAM][TAM];
	int i, j;

	printf("\n");

	for (i = 0; i < TAM; i++)
	{
		for (j = 0; j < TAM; j++)
		{
			//mat[i][j] = i==j ? 1 : 0;
			if(i == j)
			{
				mat[i][j] = 1;
			}
			else
			{
				mat[i][j] = 0;
			}
			printf("%d   ", mat[i][j]);
		}
		printf("\n");
	}

	printf("\n");

}