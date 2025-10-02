#include <stdio.h>

int main(){
    char nome[50]; // Array de caracters para armazenar nome
    int idade;     // variável para idade

    //entradas:
    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("digite sua idade: ");
    scanf("%d",&idade);

    printf("Olá %s, você tem %d anos!\n", nome,idade);
   if (idade >=18){
        printf("Você já pode tirar sua carteira de motorista!");
   } else {
        printf("infelizmente você ainda não pode tirar a sua carteira de motorista.");
   }
     return 0;  
}
    

