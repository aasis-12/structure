#include <stdio.h>
#include <string.h>

// Define a structure to hold student details
struct Student {
    char schoolName[50];
    char name[50];
    char dob[20];
    char grade[5];
    int rollNo;
    char gender;
    int age;
};

int main() {
    // Declare a variable of type struct Student to store the details
    struct Student student;

    // Input student details
    printf("Enter School Name: ");
    fgets(student.schoolName, sizeof(student.schoolName), stdin);
    student.schoolName[strcspn(student.schoolName, "\n")] = '\0'; // Remove trailing newline

    printf("Enter Student Name: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = '\0';

    printf("Enter Date of Birth (DD-MM-YYYY): ");
    fgets(student.dob, sizeof(student.dob), stdin);
    student.dob[strcspn(student.dob, "\n")] = '\0';

    printf("Enter Grade: ");
    fgets(student.grade, sizeof(student.grade), stdin);
    student.grade[strcspn(student.grade, "\n")] = '\0';

    printf("Enter Roll Number: ");
    scanf("%d", &student.rollNo);

    printf("Enter Gender (M/F): ");
    scanf(" %c", &student.gender);

    printf("Enter Age: ");
    scanf("%d", &student.age);

    // Display student details
    printf("\nStudent Details:\n");
    printf("School Name: %s\n", student.schoolName);
    printf("Name: %s\n", student.name);
    printf("Date of Birth: %s\n", student.dob);
    printf("Grade: %s\n", student.grade);
    printf("Roll Number: %d\n", student.rollNo);
    printf("Gender: %c\n", student.gender);
    printf("Age: %d\n", student.age);

    return 0;
}

