#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_multiplicar.c"
#include "function_dividir.c"

int main(int argc, char  *argv[]){

    if(argc != 4){

        printf("digite o nome do programa,depois, de 3 argumentos (ex: calculadora soma 5 2)");

        printf("\nsendo SOMA a operacao, 2 e 3 os valores, esses valores podem ser quailquer inteiro");

        printf("\n\nas operacoes disponiveis serao soma, subtracao, multiplicacao, e divisao");
      
        return 0;
    }

    int num1 = atoi(argv[2]);

    int num2 = atoi(argv[3]);

    if(strcmp(argv[1], "soma") == 0){

        printf("O resultado e: %d", num1+num2);
    }

    if(strcmp(argv[1], "subtracao") == 0){

        printf("O resultado e: %d", num1-num2);
    }

    if(strcmp(argv[1], "divisao") == 0){

        printf("O resultado e: %d", dividir(num1, num2));
    }

    if(strcmp(argv[1], "multiplicacao") == 0){

        printf("O resultado e: %d", multiplicar(num1, num2));
    }

    if(strcmp(argv[1], "soma") == 1 && strcmp(argv[1], "multiplicacao") == 1 && strcmp(argv[1], "subtracao") == 1 && strcmp(argv[1], "divisao") == 1){
    
        printf("Operacao invalida");
    }
        
    printf("\nFeito por Miguel");
    
    return 0;
}
