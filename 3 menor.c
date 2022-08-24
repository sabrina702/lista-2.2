#include <stdio.h>
#include "matrixlib.h"

int main(){
	int mat[100][100], lin, cols, res;
	int i, j;
	printf("informe a quant de linhas e colunas: ");
	scanf("%d%d",&lin, &cols);
	geraMatrix(mat,lin,cols);
	printf("***Matriz***\n");
	printMatrix(mat,lin,cols);
	res = menorMatrix(mat,lin,cols);
	printf("Menor valor da matriz:%d\n",res);
	return 0;
}
