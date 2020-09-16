#include <stdio.h>
#include <string.h>
#include <ctype.h>

void split(char word[50]) {

    char s = strlen(word);
    int s_split = s / 2;

    char first[50] = {0};
    char last[50] = {0};

    for (int i = 0; i < s_split; ++i) {
        first[i]= word[i];
    }

    for ( int i = s_split,k=0; i <=s ; ++i,++k) {
        last[k]= word[i];
    }









    printf("The string split in two is '%s - %s'\n", first,last);

}
void string_lower(char word[50]){

    for (int i = 0; word[i] != 0; ++i) {
        word[i]= (char)tolower(word[i]);

    }
    printf("The string in lowercase is '%s'\n",word);
}
void string_upper(char word[50]){

    for (int i = 0; word[i] != 0; ++i) {
         word[i]= (char)toupper(word[i]);

    }
    printf("The string in uppercase is '%s'\n",word);
}
int main() {

    char word[50]={0};
    fgets(word,50 ,stdin);
    word[strlen(word) - 1] = 0;
    string_upper(word);
    string_lower(word);
    split(word);

    return 0;
}
