#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 struct student_t{

    int age;
    char name[100];

};


int main() {

    int count = 0;
    char name[100] = {0};
    int age = 0;
    // setter av plass i minne til studenter
    struct student_t* student = malloc(sizeof(struct student_t));
    // Setter av plass til 1
    int allocatedStudents = 1;


    while(1) {

        printf("Enter name of student: ");
        // Henter navn fra brukeren
        fgets(name, 100, stdin);
        // fjerner New line
        name[strlen(name) - 1] = 0;
        // Sjekker om string == "stop", Hvis den er true så vil loopen stoppe
        if (strcmp(name, "stop") == 0) {
            break;
        }

        printf("Student age: ");
        // henter alderen
        scanf("%i", &age);
        getchar();
        // hvis counten går opp så vil den reallokere minne på nytt med plass til en ekstra student
        if (allocatedStudents < count + 1) {

            allocatedStudents++;
            student = realloc(student, (allocatedStudents) * sizeof(struct student_t));
        }

        // copierer structen
        student[count].age = age;
        strcpy(student[count].name, name);
        count++;
    }

        if (count == 0) {
            printf("No students were given");
        } else {

            printf("Count: %d", count);
            for (int i = 0; i < count; ++i) {
                printf("\nName = %s, Age = %i", student[i].name, student[i].age);
            }


            //Finner den elste
            int highest_age = -9999999;
            char oldest_student[100];
            for (int j = 0; j < count; ++j) {
                if (student[j].age > highest_age) {
                    highest_age = student[j].age;
                    strcpy(oldest_student, student[j].name);
                }
            }

            // finner den yngste
            int youngest_age = +999999;
            char youngest_student[100];
            for (int j = 0; j < count; ++j) {
                if (student[j].age < youngest_age) {
                    youngest_age = student[j].age;
                    strcpy(youngest_student, student[j].name);
                }


            }
            printf("\nYoungest: %s\n", youngest_student);
            printf("Oldest: %s\n", oldest_student);
        }

        free(student);
        student = NULL;




    return 0;
}