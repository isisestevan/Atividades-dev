#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>
#define TAM 10
int pesquisa_binaria(int chave,int vetor[],int d,int e){
    int centro = (e+d)/2;
    if(vetor[centro] == chave){
        
        return centro;
    }
    
    if(e >= d){
        return -1;
    }else {
    if(vetor[centro] < chave){
       return pesquisa_binaria( chave,vetor,d,centro+1);
    }else {
       return pesquisa_binaria(chave,vetor,centro-1,e);
    } 
  }
}


 
 int main(){
    int chave;
    int vetor[TAM]={1,17,27,37,47,57,67,77,87,97}; //no caso, eu ja fiz um vetor ordenado
     printf("Informe o valor que deseja encontrar\n");
     scanf("%i",&chave);
    if (pesquisa_binaria(chave,vetor,TAM-1,0) != -1){
        printf("Chave encontrada\n");
    } else {
        printf("Chave nao encontrada\n");
    } 
    return 0;
}