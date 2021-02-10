#include <stdio.h>
int main ()
{
    float notaaluno[4][4],media[4];
    int n,a;
    printf("Digite as notas dos 4 alunos\n");
    for(a=0;a<4;a++){ 
        printf("Aluno %i",a+1);
        for(n=0;n<4;n++){
            scanf("%f",&notaaluno[n][a]);
        }
      
    } 
     for(a=0;a<4;a++){
         for(n=0;n<4;n++){
             media[a] += notaaluno[a][n];
         } 
     }
     
      
     printf("A media de todos alunos foi:\n");
     for(n=0;n<4;n++){
     printf("\t %2.f",media[4]);
     }
}