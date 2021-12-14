#include <stdio.h>
#include <stdlib.h>
#define TAM 2

int main()
{
	int mat[TAM][TAM];
	int mat2[TAM][TAM];
	int mat3[TAM][TAM];
	int i, j;

	printf("\n");
	
	printf("Informa os valores da matriz 1: \n");
	for (i = 0; i < TAM; i++)
	{
		for (j = 0; j < TAM; j++)
		{
			scanf("%d", &mat[i][j]);
		}
		printf("\n");
	}
	
	
	printf("\n");
	
	
	printf("Informa os valores da matriz 2: \n");
	for (i = 0; i < TAM; i++)
	{
		for (j = 0; j < TAM; j++)
		{
			scanf("%d", &mat2[i][j]);
		}
		printf("\n");
	
	}
	
	
	for (i = 0; i < TAM; i++)
	{
		for (j = 0; j < TAM; j++)
		{
			if(mat[i][j] > mat2[i][j]){
				mat3[i][j] = mat[i][j];
				 
			}else{
				mat3[i][j] = mat2[i][j];
			}
		}
	
	}
	
	printf("\n");
	
	for (i = 0; i < TAM; i++)
	{
		for (j = 0; j < TAM; j++)
		{
			printf("%d  ", mat3[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	
	return 0;
}