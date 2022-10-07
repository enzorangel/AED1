#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void bubbleSort(int *vetor, int tamanho){
	bool trocar = false;
	int aux = 0, cont = 0;
	while(cont < tamanho){
		for(int i=0; i<(tamanho-cont); i++){
			if(vetor[i]>vetor[i+1]){
				aux = vetor[i];
				vetor[i] = vetor[i+1];
				vetor[i+1] = aux;
				trocar = true;
			}
		}
		if(trocar == false){
			return;
		}
		cont++;
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
	bubleSort(vDesordenado, tamanho);
	
	for(int i=0; i<tamanho; i++){
	    printf("%d ", vDesordenado[i]);
	}

	return 0;
}
