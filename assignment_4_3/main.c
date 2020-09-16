#include <stdio.h>
#include <string.h>


#define l 100
int main() {
    char  string1[100]={0};
    char  string2[100]={0};


    fgets(string1,l,stdin);
    fgets(string2,l,stdin);

    string1[strlen(string1) - 1] = 0;
    string2[strlen(string2) - 1] = 0;

    if (strcmp(string1,string2)== 0)
        printf("The strings are equal\n");
    else
        printf("The strings are not equal\n");


    if (strstr(string1, string2) !=0 || strstr(string2,string1) != 0)
        printf("It is a substring!\n");
    else
    printf("It is not a substring!\n");





    return 0;
}
