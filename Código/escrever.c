#include <stdio.h>

int main(){
	FILE *arquivo;
	
	arquivo = fopen("matriz.txt","w");
	
	int i, j;
	
	for(i=0; i < 3; i++){
		for(j=0; j < 3; j++){
			fprintf(arquivo, "%d ", (i + j + 1));
		}
		fprintf(arquivo, "\n");
	}
	
	fclose(arquivo);
	
	return 0;
	
}
