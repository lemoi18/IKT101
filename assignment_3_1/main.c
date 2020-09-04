#include <stdio.h>
#include <stdlib.h>

int sum(int numbers[], int count)
{
int sum= 0;
for (int i = 0; i < 10; i++ )
    sum += numbers[i];

    return sum;
}

float avg(int numbers[], float count)
{
    float average = 0;
    int sum = 0;
    count = 0;
    for (int i = 0; i < 10; i++ ) {
        sum += numbers[i];
        count++;

    }
        average = sum/count ;

    return average;
}

int cmpfunc (const void * a, const void * b) {
    return ( *(int*)a - *(int*)b );
}


int minumum(int numbers[],int count){

     int min = numbers[0];
     for (int i= 0;i < 10;++i) {

         if (numbers[i] < min )
             min = numbers[i];

     }
    return min;

}

int maximum(int numbers[],int count){

    int max= numbers[0];
    for (int i= 0;i < 10; ++i) {

        if (numbers[i] > max)
            max = numbers[i];

    }
        return max;


}

float Median(int numbers[], int count) {
    float median = 0;

    qsort(numbers,10, sizeof(int),cmpfunc);
    median = (numbers[10/2]+numbers[10/2-1])/2.00;

  return median;

    }





int main() {

    int numbers[10];

    for (int i = 0; i < 10; ++i) {
        scanf("%i",&numbers[i]);
    }



    int echo= minumum(numbers,10);
        printf("Minimum: %i\n",echo);

    int bravo= maximum(numbers,10);
        printf("Maximum: %i\n",bravo);

   int golf = sum(numbers, 10);
    printf("Sum: %i\n",golf);

    float hotel = avg(numbers, 10);
    printf("Average: %g\n",hotel);

    int sorted = 0;
    qsort(numbers,10, sizeof(int),cmpfunc);
    printf("Sorted: ");
    for (int n = 0; n < 10; ++n)
        printf("%i ",numbers[n]);

    float charlie = Median(numbers,10);
    printf("\nMedian: %g\n",charlie);

    return 0;
}
