#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include "recursividade.c"
#include "blackjack.c"

void main(){
    int op;
    int num;

    system("Color 0");
    do{
        system("cls || clear");
        system("Color 05");
        fflush(stdin);
        printf("1- Fatorar");
        printf("\n2- BlackJack");
        printf("\n5- Sair");
        printf("\nDigite a opcao desejada: ");
        op = getch();
        system("cls || clear");

        switch(op){

            // Fatoração
            case '1':
                printf("\nNumero a ser fatorado: ");
                scanf("%d", &num);

                // Chama a função no arquivo recursividade.c
                num = fatorar(num);
                printf("\nResultado e %d", num);

                sleep(3);
                system("cls || clear");
                break;

            // Jogo do 21
            case '2':
                // Chama a função do jogo 21 no arquivo blackjack.c
                game21();
                break;

            // Sair do programa
            case '5':
                return;
                break;
            
            // Chamado quando digitado um valor invalido
            default:
                break;
    }
    } while (op != 5);
}