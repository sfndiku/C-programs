#include <stdio.h>
void main(){

    struct student{
        int roll;
        char name[50];
        int age;
    }s1;
    struct student *p = &s1;
    printf("Type the Roll no, Name and Age: ");
    scanf("%d %s %d",&p->roll,p->name,&p->age);

    printf("The Details of the student are:\nName: %s\nRoll no: %d\nAge: %d\n",p->name,p->roll,p->age);

}