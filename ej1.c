#include <stdio.h>

int calc_triang (int n, int number){

    number = (n*(n+1))/2;

    printf("%d ", number);

    return 0;

}

int main (){

    int n;

    int number;

    number = 0;

    n = 1;

    while (n != 101) {

        calc_triang(n, number);

        n += 1;

    }

    printf("\n");

}