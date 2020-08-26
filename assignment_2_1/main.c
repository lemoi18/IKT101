#include <stdio.h>
int main() {
// asked user for a number


    float num = 1;
    float sum = 0;
    float avg = 0;
    float count = 0;

    printf("Enter a Number:");


    while ( num != 0) {
        if (sum != 0) {
            count++;
        }
        scanf("%g", &num);
        sum = sum+ num;
        avg = sum/count;
    }


    printf("Count: %g\n", count);
    printf("Sum: %g\n",sum);
    printf("Average: %g\n",avg);

    return 0;
}



