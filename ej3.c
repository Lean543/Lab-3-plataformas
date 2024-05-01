#include <stdio.h>

#define SIZE 5

int findlargestsquare (int matrix[][SIZE]{



}

int main(){

    int matrix [SIZE][SIZE] = {

        {0, 1, 1, 1, 0},
        {0, 1, 1, 1, 1},
        {1, 1, 1, 1, 0},
        {0, 1, 1, 0, 1},
        {1, 0, 1, 0, 1},

    }

    int largestsquaresize = int findlargestsquare(matrix);

    printf("EL tamaño de cuadrado más grande de unos es %d\n"), largestsquaresize);

    return 0;


}