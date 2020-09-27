//
// Created by Lars Erik Moi on 21.09.2020.
//

#include "account.h"
#include <stdio.h>
#include <string.h>

void account_id(student_t account){
    scanf("%s\n",account.id);
    fgets(account.name,100,stdin);
    account.name[strlen(account.name)-1]=0;
    scanf("%i",&account.age);

    printf("Student id: %s\n",account.id);
    printf("Name: %s\n",account.name);
    printf("Age: %i\n",account.age);

}
char student_name(student_t account){
    scanf("%s\n",account.name);

    return 0;
}
int student_age(student_t account) {
   scanf("%i",&account.age);
    return 0;
}
