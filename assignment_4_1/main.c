#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void string_reverse(char word[50]) {
    char reverse[50] = {0};

    for (int i = 0; word[i] != 0; ++i) {
        reverse[i] = word[strlen(word) - 1 - i];
    }
    printf("The word reversed is '%s'\n", reverse);
}



bool is_palindrome(char word[50]){

    char palindrome[50] = {0};
    for(int i = 0; word[i]!=0; ++i){
        palindrome[i] = word[strlen(word)-1 -i];

    }

    if (strcmp(word, palindrome)==0)
        return true;

    else return false;
}





int main() {


    char word[50]={0};
    printf("Please enter your word:\n");
    fgets(word, 50, stdin);
    word[strlen(word)-1]=0;
    printf("The word contains %llu letters\n", strlen(word));

    bool Palindrome = is_palindrome(word);
    if(Palindrome){
        printf("The word is a palindrome\n");
    }
    else if(!Palindrome)
        printf("The word is not a palindrome\n");

    string_reverse(word);



    return 0;

}