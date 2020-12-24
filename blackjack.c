#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>

// Definindo Variaveis
#define sort (rand() % 9 + 1)
#define period srand(time(NULL))

/*
(rand() % 9 + 1) -> Sorteia números entre 1 e 10
srand(time(NULL)) -> Para que os números sejam diferentes
*/

// Função responsavel por mostrar os resultados
void result(int sMaq, int sPlayer){
    system("cls || clear");
    printf("Sua mao: %d \nMao da maquina: %d \n", sPlayer, sMaq);
    system("Color 02");

    // Verificando para mostrar o resultado
    if (sMaq > 21){
        printf("Voce ganhouuuuu !!!!!!");
    } else if (sPlayer > sMaq){
        printf("Voce ganhouuuuu !!!!!!");
    } else if (sMaq > sPlayer){
        system("Color 04");
        printf("Voce perdeuuuu !!!!!!");
    } else {
        system("Color 01");
        printf("Empatouuu !!!!!!");
    }
    sleep(4);
}

// Sorteia os números da maquina
int maquina(int soma){
    int maq;

    maq = 0;
    period;
    while (soma >= maq || maq == 21){
        maq = maq + sort;
    }

    return maq; // Retorna o valor da soma de todos os números sorteados
}

void game21(){
    int sorteada[8];
    int sPlayer = 0, i, op, sMaq;

    period; // Para que os números sejam diferentes

    // Sorteia 3 números iniciais para o player
    for (i = 0 ; i < 3; i++ )
    {
        sorteada[i] = sort;
        sPlayer =  sPlayer + sorteada[i];
    }
    
    while (1){
        system("Color 05");
        system("cls || clear");
        printf("Sua mao: %d", sPlayer);

        // Caso a soma do player seja menor ou igual a 21
        if (sPlayer <= 21){
            printf("\nDeseja adicionar mais numeros? (1- Sim | 2- Nao)\n");
            scanf("%d", &op);

            // Sorteia mais número para o jogador
            if (op == 1){
                    sorteada[i] = sort;
                    sPlayer = sPlayer + sorteada[i];
                    i++;
            } 

            if (op == 2){
                sMaq = maquina(sPlayer); // Sortear os números da maquina
                result(sMaq, sPlayer); // Mostrar os resultados se o jogador ganhou ou não
                system("cls || clear");
                break;
            }
        }

        // Caso a soma do player seja maior ou igual a 21
        if (sPlayer > 21){
            system("cls || clear");
            printf("Sua mao: %d", sPlayer);
            system("Color 04");
            printf("\nVoce perdeuuuu !!!!!!");
            sleep(4);
            break;
        }
    }
}