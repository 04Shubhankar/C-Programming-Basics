/*Write a program to which stores information about a data in a structure containing three numbers –day, month and year?
*/

#include <stdio.h>
struct employee {
    char name[100];
    int day : 2;
    int month : 4;
    int year : 12;
};

int main() {
    struct employee emp[10];
    int day = 0;
    int month = 0;
    int year = 0;
    int i , j;

    for (i=0;i<10;i++){
        printf("Enter the name of the Employee holder: ");
        scanf("%s", emp[i].name);
        printf("Day Of joining: ");
        scanf(" %d", &day);
        printf("Month of Joining ");
        scanf(" %d", &month);
        printf("Year of Joining : ");
        scanf("%d", &year);

        emp[i].day = day;
        emp[i].month = month;
        emp[i].year = year;
    }

    for (i=0;i<9;i++){
        for (j=i+1;j<10;j++){
            if (emp[j].year < emp[i].year){
                struct employee temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }

    printf("\nEmployees sorted by year of joining:\n");
    for (i=0;i<10;i++){
        printf("%s joined in %d\n", emp[i].name, emp[i].year);
    }

    return 0;
}
