#include<stdlib.h>
#include <stdio.h>
int vetor[]; //declarei um vetor
int numero_solitario(int tam) { //uma função que recebe o tamanho do vetor
	int resp=0; 

	for(int i=0;i<tam;i++) {
		resp^=vetor[i];  // utilizei o operador xor para verificar a existencia do numero solitario
	}

	return (resp); // retorna a resposta que vai ser o numero que não tem par
}

int main() 
{ 
    int tam;
    printf("Digite o tamanho do seu vetor\n");
    scanf("%i",&tam);
    
    for(int i=0;i<tam;i++){
    	printf("Digite os valores do %do \n",i+1);
    	scanf("%i",&vetor[i]);
	}
	
	printf("O numero solitario e %d\n",numero_solitario(tam));

	return (0);
}