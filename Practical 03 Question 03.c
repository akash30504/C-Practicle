#include<stdio.h>
int main()
{
    char empname[30];
    float bs,ns,inc;

    printf("Enter Employee Name: ");
    scanf("%s", &empname);
    printf("Enter Basic Salary: ");
    scanf("%f", &bs);

    if(bs>=10000)
    inc=bs*0.15;
    else if(bs>=5000)
    inc=bs*0.10;
    else
    inc=bs*0.05;

    ns=bs+inc;

    printf("Employee Name: %s \n",empname);
    printf("New Salary: %.2f",ns);
}
