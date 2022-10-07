#include <stdio.h>
#include <stdlib.h>

void insertionSort(int *vetor, int tamanho){
	
	int aux = 0, imaior = 0;	
	
	for(int i=1; i<tamanho; i++){
		for(int j=i; j>0; j--){
			if(vetor[j-1]>vetor[j]){
				aux = vetor[j-1];
				vetor[j-1] = vetor[j];
				vetor[j] = aux;
			}else{
				break;
			}
		}
	}
}	

void preencher(int *vetor, int tamanho){
	for(int i=0; i<tamanho; i++){
		scanf("%d", &vetor[i]);
	}
}

int main(){

	int tamanho = 0;
	scanf("%d", &tamanho);
	
	int *vDesordenado = (int*)calloc(tamanho, sizeof(int));
	
	preencher(vDesordenado,tamanho);
	insertionSort(vDesordenado, tamanho);
	
	for(int i=0; i<tamanho; i++){
	    printf("%d ", vDesordenado[i]);
	}

	return 0;
}
