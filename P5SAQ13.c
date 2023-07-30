#include<stdio.h>
int main()
{
    int number;
    int sum = 0;

    printf("Enter numbers to be added (enter -1 to stop):\n");

    while (1) {
        scanf("%d", &number);

        if (number == -1) {
            break;
        }

        sum += number;
    }

    printf("The sum is: %d\n", sum);
}
