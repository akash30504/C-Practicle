#include<stdio.h>
int main()
{
    int array[10];
    int i;

    printf("Enter 10 integers:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    printf("The entered array is: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
