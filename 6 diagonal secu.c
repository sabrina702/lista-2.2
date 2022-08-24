#include <stdio.h>
#include "matrixlib.h"

int main(){
	int mat[100][100], ordem, soma=0;
	int i, j;
	printf("informe a ordem da matriz: ");
	scanf("%d",&ordem);
	carregaMatrix(mat,ordem,ordem);
	printf("***Matriz***\n");
	printMatrix(mat,ordem,ordem);
	printf("diagonal secundaria: \n");
	j = ordem-1;
	for(i=0;i<ordem;i++){
		printf("%d |", mat[i][j]);
		j--;
	}
	return 0;
}
