#include <stdio.h>
int main()
{
   char stname[20];
    int byear,age;
    printf("Enter Your Name: ");
    scanf("%s", stname);
    printf("Enter Your Year Of Birth: ");
    scanf("%d", &byear);
    age=2023-byear;
    printf("Hello %s You are %d years old \n", stname, age);
    return 0;
}
