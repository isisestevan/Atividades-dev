#include <stdio.h>
#include <stdlib.h> 
#define TAM 10
int vetormusica[TAM];
//função para adicionar a musica pelo id
void add_musica(int vetormusica[]){ 
    int resposta=0; 
    int cont=0;
    do { 
       printf("Digite o id da musica que deseja inserir\nSe voce deseja para de adicionar digite -1\n");
       scanf("%i",&resposta);
       vetormusica[cont]=resposta; 
       cont ++;
    } while(resposta>0);

    
    
} 
//função de busca binaria para pesquisar a musica que deseja pelo id
int busca_id(int chave,int vetormusica[],int d,int e){
    int centro = (e+d)/2;
    if(vetormusica[centro] == chave){
        
        return centro;
    }
    
    if(e >= d){
        return -1;
    }else {
    if(vetormusica[centro] < chave){
       return busca_id( chave,vetormusica,d,centro+1);
    }else {
       return busca_id(chave,vetormusica,centro-1,e);
    } 
  }
}
int main(){ 
    int chave,resposta;
    printf("Deseja adicionar uma musica?\nDigite 1 para SIM\nDigite 0 para NAO\n");
    scanf("%i",&resposta);
    if(resposta==1){
         add_musica(vetormusica);
    }else exit;
    printf("Informe o ID da musica que deseja buscar\n");
    scanf("%i",&chave); 
    if (busca_id(chave,vetormusica,TAM-1,0) != -1){
        printf("Sua musica foi encontrada\n");
    } else {
        printf("Sua musica nao foi encontrada\n");
    } 
    return 0;
    
}