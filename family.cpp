#include<stdio.h>

struct date 
{
    int year, day;
    char month[20];
};

struct details
{
    char fname[20], mname[20], lname[20];
    struct date a;
    char food[30],colour[20];
    int age;
    int grade;
    char gen[20];
    char fathername[30], mothername[30];
    char addr[30];
    
};

int main()
{
    struct details d;

    printf("\nEnter your first, middle, and last name: ");
    scanf("%s%s%s", d.fname, d.mname, d.lname);

    printf("\nEnter your date of birth in YY/MM/DD: ");
    scanf("%d%s%d", &d.a.year, d.a.month, &d.a.day);

    printf("\nEnter your age: ");
    scanf("%d", &d.age);

    printf("\nEnter your grade: ");
    scanf("%d", &d.grade);

    printf("\nEnter your gender: ");
    scanf("%s", d.gen);

    printf("\nEnter your father's name: ");
    scanf("%s", d.fathername);

    printf("\nEnter your mother's name: ");
    scanf("%s", d.mothername);

    printf("\nEnter your address: ");
    scanf("%s", d.addr);

    printf("\n enter your favourite food :");
    scanf("%s", &d.food);
    
     printf("\n enter your favourite colour :");
     scanf("%s", &d.colour);

    printf("\nFull name: %s %s %s\nDate of birth: %d %s %d\nAge: %d\nGrade: %d\nGender: %s\nFather's name: %s\nMother's name: %s\nAddress: %s\nfavourite food: %s\n favourite colour: %s\n",
           d.fname, d.mname, d.lname, d.a.year, d.a.month, d.a.day, d.age, d.grade, d.gen, d.fathername, d.mothername, d.addr,d.food,d.colour);

    return 0;
}


