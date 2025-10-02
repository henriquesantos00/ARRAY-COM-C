#include <stdio.h>

int main(){
    int notas [5]; //declara um array de 5 posiçoẽs para armazenar as notas
    int i ;        // variavél de controle para o loop(repetição)

    // entrada do usuário
    printf("Digite 5 notas:\n");

    for(i=0; i <5; i++){
        scanf("%d",&notas[i]);//lê uma nota e armazena na posição i do array
    }

    //exibição
    printf("\n Notas digitadas:\n");

        for(i =0; i < 5; i++){
            printf("%d", notas[1]); // imprime a nota da posição 1
        }

        return 0;
              
}