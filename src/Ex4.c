#include <stdio.h>
#include <string.h>

typedef struct jogador_est {
    int numero;
    float peso;
    float altura;
    char inicial;
}player;

int main() {
    player jogador[11];
    int i, j =1;

    printf("Welcome!\n");

    for (i = 0; i < 11; i++){
        printf("\nPLAYER DATA %d\n", j);
        printf("Enter the shirt number:");
        scanf("%d", &jogador[i].numero);
        printf("Enter the player weight:");
        scanf("%f", &jogador[i].peso);
        printf("Enter the player height:");
        scanf("%f", &jogador[i].altura);
        printf("Enter the player name's initial:");
        fflush(stdin);
        scanf("%c", &jogador[i].inicial);
        j++;
    }

    float baixo, pesado;
    baixo = jogador[0].altura;
    pesado = jogador[0]. peso;

    char ini = jogador[0].inicial;
    int num = jogador[0].numero;

    printf("\nNumber - Weight - Height - Initial\n");
    for (i = 0; i < 11; i++){
        printf("%d - %.2f - %.2f - %c\n\n", jogador[i].numero, jogador[i].peso, jogador[i].altura, jogador[i].inicial);

        if (jogador[i].altura < baixo){
            ini = jogador[i].inicial;
        }
        if (jogador[i].peso > pesado){
            num = jogador[i].numero;
        }
    }
    printf("The lowest player has the initial: %c.\n"
           "The heaviest player has the number: %d.\n", ini, num);

    return 0;
}
