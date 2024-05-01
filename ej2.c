#include <stdio.h>

int factorial (int n){

    int i = 1;

    while (n > 1){

        i = i*n;

        n = n - 1;

    }

    return i;

}


int main (int argc, char *argv[]){

    char n;

    n = argv[1];

    int fact = factorial(n);

    printf("%d! = %d\n", n, fact);

    return 0;

}
