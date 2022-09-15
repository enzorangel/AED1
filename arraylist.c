struct arraylist{
    int* vetor;
    int qtdade;
    int capacidade;
};

struct arraylist* inicializar(int capacidade){

    struct arraylist* lista = (struct arraylist*)malloc(sizeof(struct arraylist));
    lista -> vetor = (int*)calloc(capacidade, sizeof(int));
    lista -> qtdade = 0;
    lista -> capacidade = 0;

    return lista;
}

void duplicarCapacidade(struct araylist* lista){
    /*int novaLista[2*lista->capacidade];
    for(int i=0; i<lista->capacidade; i++){
        novaLista[i] = lista[i];
    }
    free(lista);
    lista = novaLista;*/

    lista -> vetor = (int*)realloc(lista -> vetor; 2 * lista -> capacidade * sizeof(int));
    lista -> capacidade = 2*lista->capacidade;
}

void inserirElementoNoFim(struct arraylist* lista, int valor){
    if(lista->qtdade == lista->capacidade){
        duplicarCapacidade(lista);
    }
    lista -> vetor[lista->qtdade] = valor;
    lista -> qtdade++;
}

int obterElementoEmPosicao(struct arraylist* lista, int posicao){
    if(posicao >= 0 && posicao < lista -> qtdade){
        return lista -> vetor[posicao];
    }
}



int main(){

    int capacidade = 2;

    inicializar(capacidade);

    return 0;
}
