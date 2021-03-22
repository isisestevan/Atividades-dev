#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

int main()
{
    struct lista{
        int valor;
        int num;
        struct lista *proximo
    };
    struct lista  m1,m2,m3;
    struct lista *gancho= &m1;
    m1.valor=10;
    m2.valor=20;
    m3.valor=30;
    m1.num=100;
    m2.num=200;
    m3.num=300;
    
    m1.proximo=&m2;
    m2.proximo=&m3;
    m3.proximo=(struct lista *)0;

    while(gancho != (struct lista*)0){
        printf("%i\n",gancho ->valor);
        printf("%i\n",gancho -> num);
        gancho = gancho ->proximo; 
    }
}
