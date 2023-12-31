#include<stdio.h>

struct employee
{
int eid,doj,dob,sal;
char name[50],addr[50],post[50],gen[50];
};
int main()
{
struct employee e;
printf("\n enter employee id,date of joinig,date of birth,salary");
scanf("%d%d%d%d",&e.eid,&e.doj,&e.dob,&e.sal);
printf("\n enter employee name,address,post,gender");
scanf("%s%s%s%s",&e.name,&e.addr,&e.post,&e.gen);
printf("\nemployee id=%d\nemployee name=%s\nemployee date ofjoinig=%d\nemployee date of birth=%d\nemployee address=%s\nemployee post=%s\nemployee salary=%d\nemployee gender=%s\n",e.eid,e.name,e.doj,e.dob,e.addr,e.post,e.sal,e.gen);
}

