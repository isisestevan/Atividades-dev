#include <stdio.h>
int main ()
{
    int num1,num2;
    printf("Informe o numero de num1\n");
    scanf("%i",&num1);
    printf("Informe o numero de num2\n");
    scanf("%i",&num2);
    num1 > num2 ? printf("Sim\n") : printf("Nao\n"); // num1 é maior que num2 ? se sim printf :(significa se n)
}