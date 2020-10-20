#include <stdio.h>
#include <stdlib.h>
#include "student_t.h"
#include <string.h>

void numbers(int numb[],int n){
    for (int i = 0; i < n; ++i) {

        scanf("%i", &numb[i]);
    }
    printf("Count: %i\n", n);
    printf("Numbers: ");
    for (int c = 0; c < n; ++c) {

        printf("%i ", numb[c]);
    }
}
int cmpfunc (const void * a, const void * b) {
    return ( *(int*)a - *(int*)b );
}
int main() {

    int n= 0;
    int size= 0;



    //printf("How many integers the user will type in\n");
    scanf("%i", &n );
    if (n == 0) {
        printf("No numbers were given\n");
        return 0;
    }
        size = size + n;

        int *numb = malloc(size * sizeof(int));


        numbers(numb, size);
    qsort(numb,n, sizeof(int),cmpfunc);
    printf("\nSorted: ");
    for (int k = 0; k <n ; ++k)
        printf("%i ",numb[k]);

free(numb);
    return 0;
}