#include <stdio.h>

int main(){
	FILE *arquivo;
	
	arquivo = fopen("matriz.txt","r");
	
	int i, j, matriz[3][3];
	
	for(i=0; i < 3; i++){
		for(j=0; j < 3; j++){
			fscanf(arquivo, "%d", &matriz[i][j]);
		}
	}
	
	for(i=0; i < 3; i++){
		for(j=0; j < 3; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	fclose(arquivo);
	
	return 0;
	
}
