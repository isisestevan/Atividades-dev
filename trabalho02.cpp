#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <string>
#include <iostream>
using namespace std;
vector<string> Insere(vector<string> lista, string nome){ //função para inserir o produto na lista
    lista.push_back(nome); //adiciona o produto no final do vetor
    return lista;
}
bool item_existente(vector<string> lista,string nome){ // função para saber se o produto ja existe na lista
    int i;
    for(i=0;i<lista.size();i++){
        if(lista[i] == nome) //se o item que estiver na lista for igual ao nome do produto
           return true; // retorna verdadeiro
       }
       return false; // se n falso
} 
void Printar(vector<string> lista){ //função para printar a lista
    int i;
    printf("Sua lista:\n");
    for(i=0;i<lista.size();i++){
        cout << lista[i]; //imprime a lista
        printf("\n");
    }
}

int main(){
    vector<string> lista_produtos; //declaro um vetor de produtos que é a lista
    string nome_produto; // string do nome dos produtos
    while(nome_produto != "sair"){ 
        cout<<"Digite o nome do produto que deseja adicionar\tCaso queira sair digite : sair\n"; 
        cin >> nome_produto; // recebe o nome do produto
        
        if(item_existente(lista_produtos,nome_produto)== false && nome_produto != "sair"){
            lista_produtos= Insere(lista_produtos,nome_produto);
        }

    }

    Printar(lista_produtos);
}