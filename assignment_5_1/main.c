#include <stdio.h>
#include "account.h"
#include <string.h>

int main() {


    student_t account;
    memset(&account,0,sizeof(account));

    account_id(account);
    // account.id[strlen(account.id) - 1] = 0;
    //student_name(account);
  //  account.name[strlen(account.name) - 1] = 0;
  //  student_age(account);


    //printf("The student id: %s\n",account.id);
    //printf("The student name: %s\n",account.name);
   // printf("The student age: %i\n",account.age);
    return 0;
}
