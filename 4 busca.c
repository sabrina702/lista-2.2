#include "matrixlib.h"
#include <stdio.h>

int main(){
	int mat[100][100], lin, cols, busca, cont=0;
	int i, j;
	printf("informe a quant de linhas e colunas: ");
	scanf("%d%d",&lin, &cols);
	geraMatrix(mat,lin,cols);
	printf("***Matriz***\n");
	printMatrix(mat,lin,cols);
	printf("Valor para verificacao: ");
	scanf("%d",&busca);
	for(i=0;i<lin;i++)
		for(j=0;j<cols;j++)
			if(mat[i][j]==busca)
				cont++;
	printf("%d se repete: %d\n",busca, cont);
	return 0;
}

