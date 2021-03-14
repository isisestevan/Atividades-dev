#include <stdio.h>
#include <stdlib.h> // necessaria
#include <time.h> // tambem necessaria para sempre gerar numeros diferentes ao compilar
int main()
{ 
    int i;
    printf("Gerando 10 numeros aleatorios\n");
    srand(time(NULL)); //função para gerar numeros diferentes a cada compilada
    
    for(i=0;i<10;i++)
    {
        printf("%i ",rand() % 50); //isso significa que os numeros serao de 0 a 100
    } 
    return 0;
}