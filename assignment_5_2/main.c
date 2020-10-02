#include <stdio.h>
#include <string.h>
#include "account.h"

int main() {


student_t account;
    memset(&account,0,sizeof(account));

    printf("1.Read student information from file\n");
    printf("2.Write student information to file\n");
    printf("3.Exit\n");
    scanf("%i",&account.valg);



    if (account.valg == 1) {

        FILE *fp;
        fp= fopen("student_read.txt", "r");
                fscanf(fp, "%s", account.id);


        while ((fgetc(fp)) != '\n');
        fgets((char *) &account.name, 20, fp);


        fscanf(fp, "%i", &account.age);





                //fscanf(fp,"%s", account.name);



        fclose(fp);




        printf("Student id: %s\n",account.id);
        printf("Name: %s\n",account.name);
        printf("Age: %i\n",account.age);
    }
else if (account.valg == 2)
         {

            FILE *fp;
            fp= fopen("student_write.txt", "w");

             scanf("%s\n",account.id);
             fgets(account.name,20,stdin);
             account.name[strlen(account.name)-1]=0;
             scanf("%i",&account.age);

            fprintf(fp,"%s\n",account.id);
            fprintf(fp,"%s\n",account.name);
            fprintf(fp,"%i\n",account.age);
            fclose(fp);

            printf("Student id: %s\n",account.id);
            printf("Name: %s\n",account.name);
            printf("Age: %i\n",account.age);
        }
    else return 0;
}
