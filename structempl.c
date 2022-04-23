#include<stdio.h>
#include<string.h>
struct employee
{
    char name[50];
    int age;
    int phno;
    int sal;
}p1,p2,p3,p[20];
int main()
{
    printf("\n\tThe below details are from the EMPLOYEE\'s Who worked good in this company:\n");
    printf("\t_______________________________________\n");
    printf("\t|Name|\tAge|\tPhone Number|\tSalary|\n");
    printf("\t_______________________________________\n");
    strcpy(p1.name,"Chirag");
    p1.age=24;
    p1.phno=1234567788;
    p1.sal=20000;
    printf("\t|%s|%d |\t%d  |\t%d |\n",p1.name,p1.age,p1.phno,p1.sal);
    printf("\t_______________________________________\n");
    strcpy(p2.name,"Arnav");
    p2.age=31;
    p2.phno=1234567891;
    p2.sal=56000;
    strcpy(p3.name,"Shivam");
    p3.age=45;
    p3.phno=1234567892;
    p3.sal=30500;
    printf("\t|%s |%d |\t%d  |\t%d |\n",p2.name,p2.age,p2.phno,p2.sal);
    printf("\t_______________________________________\n");
    printf("\t|%s|%d |\t%d  |\t%d |\n",p3.name,p3.age,p3.phno,p3.sal);
    printf("\t_______________________________________\n");
}
