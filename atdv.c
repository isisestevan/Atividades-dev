#include <stdio.h>
#include <stdlib.h>

int main ()
{   int Seuqencial(int *vet,int tam,int busca);
    int vetor[8];
    int busca,achou;
    for(int i=0;i<8;i++){
    printf("Informe os numeros de um vetor\n");
    scanf("%i",&vetor[i]);
    } 
    printf("Informe o numero que deseja buscar no vetor\n");
    scanf("%i",&busca);
    achou = Sequencial(vetor,8,busca);
    if(achou != -1){
        printf("O numero foi achado no vetor\n");
    } else{
        printf("O numero  nao foi achado no vetor\n");
    }
}

int Sequencial(int *vet,int tam,int buscado){
    for(int i=0;i<tam;i++){
        if(buscado == vet[i])
            return i;
         else
            return -1;
        
    }
}