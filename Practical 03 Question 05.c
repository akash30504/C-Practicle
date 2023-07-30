#include<stdio.h>
int main()
{
    int num1, num2;

    printf("Enter The First Number: ");
    scanf("%d", &num1);

    printf("Enter The Second Number: ");
    scanf("%d", &num2);

    if (num2 != 0 && num1 % num2 == 0) {
        printf("%d is a Multiple of %d\n", num1, num2);
    } else {
        printf("%d is Not a Multiple of %d\n", num1, num2);
    }
}
