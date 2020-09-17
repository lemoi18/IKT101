#include <stdio.h>
#include <string.h>

int main() {


    char string[100];
    int c = 0, count[26] = {0}, x;

    printf("Enter a string\n");
    fgets(string,sizeof(string),stdin);

    while (string[c] != '\0') {


        if (string[c] >= 'a' && string[c] <= 'z') {
            x = string[c] - 'a';
            count[x]++;
        }

        c++;
    }

    for (c = 0; c < 26; c++)
        printf("'%c' : %d\n", c + 'a', count[c]);



    return 0;
}
