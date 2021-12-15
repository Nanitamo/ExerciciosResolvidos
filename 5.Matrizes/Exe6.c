#include <stdlib.h>
#include <time.h>

#define TAM 4

int main()
{
	int mat[TAM][TAM];

	int i, j;

	srand(time(NULL)); // zerar o timer da funcão rand(), para gerar novos valores


	printf("\n");

	for (i = 0; i < TAM; i++)
	{
		for (j = 0; j < TAM; j++)
		{
			mat[i][j]  = rand() % 20 + 1;
		}
		printf("\n");
	}
	printf("\n");


	printf("MATRIZ ORIGINAL: \n");
	for (i = 0; i < TAM; i++)
	{
		for (j = 0; j < TAM; j++)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for (i = 0; i < TAM; i++)
	{
		for (j = 0; j < TAM; j++)
		{
			if(i < j)
			{
				mat[i][j] = 0;
			}

		}
		printf("\n");
	}

	printf("MATRIZ TRANSFORMADA: \n");
	for (i = 0; i < TAM; i++)
	{
		for (j = 0; j < TAM; j++)
		{
			
			printf("%d ", mat[i][j]);
			
		}
		printf("\n");
	}

	return 0;
}