#include <stdio.h>

int main() {
    int mat[5][5] = {{1,1,1,1,1},
                     {1,1,1,1,1},
                     {1,1,1,1,1},
                     {1,1,1,1,1},
                     {1,1,1,1,1}};
    int i, j, s1 = 0, s2 = 0, s3 = 0, s4 = 0;

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            if (i==4){
                s1+=mat[i][j];
            }
            if (j ==2){
                s2+=mat[i][j];
            }
        }
    }

    for (i = 0; i < 5; i++){
        s3+=mat[i][i];
    }

    for (i = 4; i >= 0; i--){
        s4+=mat[i][i];
    }

    printf("%d\n", s1);
    printf("%d\n", s2);
    printf("%d\n", s3);
    printf("%d\n", s4);

    return 0;
}
