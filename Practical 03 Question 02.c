#include<stdio.h>
int main()
{
    int num1, num2, num3;

    printf("Enter The First Number: ");
    scanf("%d", &num1);

    printf("Enter The Second Number: ");
    scanf("%d", &num2);

    printf("Enter The Third Number: ");
    scanf("%d", &num3);

    int largest = num1;

    if (num2 > largest) {
        largest = num2;
    }

    if (num3 > largest) {
        largest = num3;
    }

    int smallest = num1;

    if (num2 < smallest) {
        smallest = num2;
    }

    if (num3 < smallest) {
        smallest = num3;
    }

    printf("\n");
    printf("The Largest Number is: %d\n", largest);
    printf("The Smallest Number is: %d\n", smallest);
}
