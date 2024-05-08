#include <stdio.h>
#include <stdlib.h>

int factorial (int n){

    int i = 1;

    while (n > 1){

        i = i*n;

        n = n - 1;

    }

    return i;

}


int main (int argc, char *argv[]){

    int fact;

    int n = atoi(argv[1]);

    fact = factorial(n);

    printf("%d! = %d\n", n, fact);

    return 0;

}
