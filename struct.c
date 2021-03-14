#include<stdio.h>
#include <stdlib.h>
struct horario
    {
        int horas;
        int minutos;
        int segundos;
    };
int main(){
    void RECEBE(struct horario agora[5]);
    void PRINT(struct horario agora[5]);
    struct horario list[5];
    RECEBE(list);
    PRINT(list);
}
void RECEBE(struct horario agora[5]){
    for(int i=0;i<5;i++){
        printf("Entre com o horario:\n");
        scanf("%i:%i:%i",&agora[i].horas,
                         &agora[i].minutos,
                         &agora[i].segundos);
    }
} 
 void PRINT(struct horario agora[5]){
     for(int i=0;i<5;i++){
         printf("%i:%i:%i",agora[i].horas,
                           agora[i].minutos,
                           agora[i].segundos);
     }
 }