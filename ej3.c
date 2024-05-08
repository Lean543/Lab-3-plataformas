#include <stdio.h>
#include <stdlib.h>

int rnum () {

    int valor = rand() % 2;

    return valor;
    
}


int findlargestsquare (int n, int matrix[n][n]){

    int i = 0;

    int j = 0;

    int maxcuadra = 1;

    for(i = 0; i < n; i += 1){

        for(j = 0; j < n; j += 1){

            if (matrix[i][j] == 1){

                int cualrededor = 1;

                while ((i + cualrededor < n) && (j + cualrededor < n)) {

                    int c;

                    for (c = 0; c <= cualrededor; c += 1) {

                        if ((matrix[i + c][j + cualrededor] == 0) || (matrix[i + cualrededor][j + c] == 0)){
                                
                            break;

                        }

                    }

                    if (c > cualrededor) {

                        cualrededor += 1;

                    } else {

                        break;

                    }

                }

                if (cualrededor > maxcuadra) {

                    maxcuadra = cualrededor;
                    
                }
            }
        }
    }

    return maxcuadra;

}

int main(){

    int i = 0;

    int j = 0;

    int n;

    printf("Ingrese el número de filas de la matriz nxn (número menor/igual a 10): ");

    scanf("%d", &n);

    if(n > 10){

        n = 3;

    }

    int matrix[n][n];

    for(i = 0; i < n; i += 1){

        for(j = 0; j < n; j += 1){

            matrix[i][j] = rnum();

        }

    }

    int largestsquaresize = findlargestsquare(n, matrix);

    printf("\nMatriz aleatoria:\n");

    for(i = 0; i < n; i += 1){

        for(j = 0; j < n; j += 1){

            printf("%d ", matrix[i][j]);

        }

        printf("\n");

    }

    printf("El tamaño del cuadrado más grande de unos es de %dx%d\n", largestsquaresize, largestsquaresize);

    return 0;


}