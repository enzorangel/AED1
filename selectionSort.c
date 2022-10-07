#include <stdio.h>
#include <stdlib.h>

void selectionSort(int *vetor, int tamanho){
	int menor = 0, aux = 0;
	for(int i=0; i<(tamanho-1); i++){
		menor = i;
		for(int j=i+1; j<tamanho; j++){
			if(vetor[j]<vetor[menor]){
				menor = j;
			}
		}
		aux = vetor[i];
		vetor[i] = vetor[menor];
		vetor[menor] = aux;
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
	selectionSort(vDesordenado, tamanho);
	
	for(int i=0; i<tamanho; i++){
	    printf("%d ", vDesordenado[i]);
	}

	return 0;
}
