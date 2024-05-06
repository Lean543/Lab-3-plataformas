#include <stdio.h>

#define ROWS 5

#define COLS 5

int findlargestsquare (int matrix[ROWS][SIZE]){

    for(int i = 0; i < ROWS; i++) {

        for(int j = 0; j < COLS; j++){

            bool finish = false;

            while (finish){

                int counter = 1;

                if (matrix[i][j] == 1){

                    j += 1;

                    counter += 1;

                else

                    finish = false;

                }

            }
        }
    }

}

int create_matrix (int n){

    //hacer código

    //utilizar y investigar rand

    /*int matrix[ROWS][COLS] = {

        {0, 1, 1, 1, 0},
        {0, 1, 1, 1, 1},
        {1, 1, 1, 1, 0},
        {0, 1, 1, 0, 1},
        {1, 0, 1, 0, 1},

    };*/

    return int matrix[ROWS][COLS];
}
int main(){

    int n;

    scanf("Ingrese el número de filas de la matriz nxn: %d", n)

    int matrix[ROWS][COLS] = create_matrix(n);

    int largestsquaresize = findlargestsquare(matrix[ROWS][COLS]);

    //printf("EL tamaño de cuadrado más grande de unos es %d\n"), largestsquaresize);

    return 0;


}