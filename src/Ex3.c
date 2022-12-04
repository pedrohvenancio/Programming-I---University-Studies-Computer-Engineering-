#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main() {
        int i, j, *pont = malloc(6 * sizeof(int)), num =1, x=0;
        int *loto = malloc(6 * sizeof(int));
        srand(time(NULL));

        do {
            loto[i] = rand () % 10;
            int igual = 0;
            for (j = 0; j < i; j++){
                if (loto[i] == loto[j]){
                    igual = 1;
                }
            }
            if (igual == 0){
                i++;
            }
        } while (i < 6);

        printf("Welcome, let's check if you won on the lotto :)\nEnter 6 numbers (1 to 10):\n");
        for (i = 0; i < 6; i++) {
            printf("%d number:", num);
            scanf("%d", &pont[i]);
            num++;
            if (pont[i] == loto[i]){
                x++;
            }
        }

        printf("The chosen numbers and those you entered were:\n");
        for( i = 0; i < 6; i++){
            printf("%d ", loto[i]);
        }
    printf("\n\n");
        for( i = 0; i < 6; i++){
            printf("%d ", pont[i]);
        }
    printf("\n\n");

        int *resultado = malloc(x * sizeof(int));

    printf("You hit the numbers:\n");
        for (i=0;i<6;i++) {
            for (j =0; j < 6; j++){
                if (loto[j] == pont[i]){
                    resultado[i] = pont[i];
                    printf("%d ", resultado[i]);
                }
            }

        }

        free(loto);
        free(pont);
        free(resultado);
        return 0;
}
