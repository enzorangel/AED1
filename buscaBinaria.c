#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

bool buscaBinaria(int *vetor, int valor, int ini, int fim){
    if(fim < ini){
        return false;
    }

    int meio = (fim+ini)/2;

    if(vetor[meio]>valor){
        return buscaBinaria(vetor,valor,meio+1,fim);
    }else if(vetor[meio]<valor){
        return buscaBinaria(vetor,valor,ini,meio-1);
    }else{
        return true;
    }
}

int indiceCorreto(int *vetor, int valor, int ini, int fim, int tamanho){
    if(fim < ini){
        if(fim == tamanho-1){
            return fim;
        }else{
            return 0;
        }
    }

    int meio = (fim+ini)/2;

    if(vetor[meio]>valor){
        if(vetor[meio-1]<=valor){
            return meio;
        }else{
            return indiceCorreto(vetor,valor,ini,meio-1,tamanho);
        }
    }else if(vetor[meio]<valor){
        if(vetor[meio+1]>=valor){
            return meio+1;
        }else{
            return indiceCorreto(vetor,valor,meio+1,fim,tamanho);
        }
    }else{
        return meio;
    }

}

int main(){

    int tamanho = 10;
    int *vetor = (int*)calloc(tamanho, sizeof(int));

    for(int i=0; i<tamanho; i++){
        vetor[i] = tamanho-i;
    }

    int valor = 2;
    int ini = 0, fim = tamanho-1;

    if(buscaBinaria(vetor,valor,ini.fim)){
        printf("O valor se encontra no vetor");
    }else{
        printf("O valor não se encontra no vetor");
    }

    return 0;
}