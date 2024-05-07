#include <stdio.h>
#include <stdlib.h> 

int rnum () {

    int value = rand() % 2;

    return value;
    
}


int findlargestsquare (int** matrix, int n){

    int i = 0;

    int j = 0;

    int maxsize = 0;

    for(i = 0; i < n; i += 1){

        for(j = 0; j < n; j += 1){

            if (matrix[i][j] == 1){

                int jcounter = 0;

                int xcounter = 0;

                int cuadrado;

                int r;

                int c;

                for(r = i; r < n; r += 1){

                    xcounter = 0;

                    for(c = j; c < n; c += 1){

                        if (matrix[r][c] == 1){

                            xcounter += 1;

                        }

                    }

                    if (xcounter == jcounter){

                        cuadrado = xcounter;

                    }

                    if (cuadrado > maxsize){

                        maxsize = cuadrado;

                    }
                
                }

            }

        }
    }

    return maxsize;

}

int main(){

    int i = 0;

    int j = 0;

    int n;

    printf("Ingrese el número de filas de la matriz nxn: ");

    scanf("%d", &n);

    int matrix[n][n];

    for(i = 0; i < n; i += 1){

        for(j = 0; j < n; j += 1){

            matrix[i][j] = rnum();

        }

    }

    int largestsquaresize = findlargestsquare(matrix, n);

    printf("\nMatriz aleatoria:\n");

    for(i = 0; i < n; i += 1){

        for(j = 0; j < n; j += 1){

            printf("%d ", matrix[i][j]);

        }

        printf("\n");

    }

    return 0;

    printf("EL tamaño de cuadrado más grande de unos es %d\n"), &largestsquaresize);

}