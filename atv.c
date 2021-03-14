#include<stdlib.h>
#include<stdio.h> 
void VET (int vetor[],int n){
        int i,j,temporaria;
        for(i=0;i<n;i++){
            for(j=i;j<n;j++){
                if(vetor[i]>vetor[j]){
                    temporaria=vetor[i];
                    vetor[i]=vetor[j];
                    vetor[j]=temporaria;
                }
            }
        }
    }

int main(){
    int vetor[10]={5,0,7,3,8,2,9,1,4,6};
    void VET(int vetor[10],int n);
    VET(vetor,10);
    printf("A ordem crescente e :\n");
    for(int i=0;i<10;i++){
        printf(" %i\t", vetor[i]);
    } }
    
    
    