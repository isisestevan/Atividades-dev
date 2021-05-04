#include <stdio.h>
#include <stdlib.h>

//criando no
typedef struct no {
    int item;
    struct no *esq, *dir;
} No;
//struct arvore cm ponteiro apontando para no

typedef struct {
    No *raiz;
    int tam;
} Tree;
//funcao para inserir na arvore
No* Insert(No *raiz, int valor) { 
    if(raiz == NULL) { 
        No *novo = (No*)malloc(sizeof(No)); 
        novo->item = valor; 
        novo->esq = NULL; 
        novo->dir = NULL;
        return novo; 
    } else { 
        if(valor < raiz->item) 
            raiz->esq = Insert(raiz->esq, valor); 
        if(valor > raiz->item)
            raiz->dir = Insert(raiz->dir, valor); 
        return raiz;
    }
}

//funçao de busca da chave
int buscar(No *raiz, int chave) { 
    if(raiz == NULL) { 
        return 0;
    } else { 
        if(raiz->item == chave) 
            return 1; 
        else {
            if(chave < raiz->item) 
                return buscar(raiz->esq, chave); 
            else
                return buscar(raiz->dir, chave); 
        }
    }
}

//funcao de imprimir os numeros da arvore que voce buscou
void imprimir(No *raiz,int valor) { 
    if(raiz != NULL) { 
    		imprimir(raiz->esq,valor); 
    		if(valor > raiz->item){ 
    			printf("Numeros menores %d ", raiz->item); 
			}

        	
        	imprimir(raiz->dir,valor); 
        
    }
}


int main() {
    int opcao;
    int val;
    Tree Arvore;
    Arvore.raiz = NULL;

    No *raiz = NULL;

    do {
        printf("\n0 - sair\n1 - inserir\n2 - Buscar\n");
        scanf("%d", &opcao);

        switch(opcao) {
        case 0:
            printf("\nSaindo...\n");
            break;
        case 1:
            printf("Digite um valor: ");
            scanf("%d", &val);
            raiz = Insert(raiz, val);
            
            break;
    
        
        
        case 2:
            printf("Qual valor deseja fazer a busca");
            scanf("%d", &val);
            imprimir(raiz,val);
            printf("Resultado da busca: %d\n", buscar(raiz, val));
            break;
        
        default:
            printf("\nOpcao invalida...\n");
        }
    } while(opcao != 0);
}