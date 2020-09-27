//
// Created by Lars Erik Moi on 21.09.2020.
//

#ifndef ASSIGNMENT_5_1_ACCOUNT_H
#define ASSIGNMENT_5_1_ACCOUNT_H

typedef struct account{
    int age;
    char id[100];

    char name[100];

} student_t;
void account_id(student_t account);
char student_name(student_t account);
int student_age(student_t account);
#endif //ASSIGNMENT_5_1_ACCOUNT_H
