//C Program to Store Information (name, roll and marks) of a Student using Structure.

#include <stdio.h>

struct student {
    char name[100];
    int RollNo;
    int marks;
};

int main() {
    int n, i , roll;
    char scan;

    printf("Enter the Number of Students: ");
    scanf("%d", &n);

    struct student s[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Roll No: ");
        scanf("%d", &s[i].RollNo);

        printf("Enter Marks: ");
        scanf("%d", &s[i].marks);
    }

    printf("\nTo Search For a Student Type 'Y' and Press Enter Else Type No.-->");
    scanf(" %c",&scan);

    if(scan=='Y' || scan=='y'){
        printf("Enter Roll No.");
        scanf(" %d",&roll);
        
        printf("\nStudent Information:\n");
       
        printf("Name: %s\n", s[roll-1].name);
        printf("Roll No: %d\n", s[roll-1].RollNo);
        printf("Marks: %d\n\n", s[roll-1].marks);

    }

    

    return 0;
}
