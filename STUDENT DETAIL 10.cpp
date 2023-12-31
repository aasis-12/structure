#include <stdio.h>

struct student 
{
    int id;
    char name[50];
    char grade[10];
    int roll_no;
    char gender;
    int age;
};

int main() 
{
	
        struct   student s[2];
        int i;
	    for (i=0;i<2;i++)
    
	{
        printf("Enter student ID: ");
        scanf("%d", &s[i].id);

        printf("Enter student name: ");
        scanf("%s", s[i].name);

        printf("Enter student class: ");
        scanf("%s", s[i].grade);

        printf("Enter student roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter student gender (M/F): ");
        scanf(" %c", &s[i].gender);

        printf("Enter student age: ");
        scanf("%d", &s[i].age);

        
    }
    for(i=0;i<2;i++)
    {    
        printf("\nDetails for student %d:\n", i + 1);
        printf("ID: %d\n", s[i].id);
        printf("Name: %s\n", s[i].name);
        printf("Class: %s\n", s[i].grade);
        printf("Roll Number: %d\n", s[i].roll_no);
        printf("Gender: %c\n", s[i].gender);
        printf("Age: %d\n", s[i].age);
    }

    return 0;
}


