// wap in c using structure o insert details of 10 student including name,roll nmber,
//grade,gender,address,section and percentage  and display them on the screen.

#include<stdio.h>
struct student     
{
    char name[40];
    char gen[20];
    char addr[30];
    char sec[30];
    int rno;
    int grade;
    float per;
};


    int main()
{
    struct student s[10];
    int i;
    for(i=0;i<10;i++)
    {
        printf("enter student name :");
        scanf("%s",&s[i].name);
        printf("enter student grade :");
         scanf("%d",&s[i].grade);
        printf("enter student section :");
         scanf("%s",&s[i].sec);
        printf("enter student roll number  :");
         scanf("%s",&s[i].rno);
        printf("enter student percentage  :");
         scanf("%f",&s[i].per);
        printf("enter student gender :");
         scanf("%s",&s[i].gen);
        printf("enter student address :");
         scanf("%s",&s[i].addr);

         printf("\n");
    }
    for(i=0;i<10;i++)
    {
        printf("\n Name=%s \n Grade=%d  \n Section=%s  \n Roll number=%d  \n Percentage=%f  \n Gender=%s  \n Address=%s \n ",s[i].name,s[i].grade,s[i].sec,s[i].rno,s[i].per,s[i].gen,s[i].addr);
    }
      return 0;

    
        

}    


