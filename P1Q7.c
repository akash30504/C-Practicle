#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter First Number");
    scanf("%d", &x);
    printf("Enter Second Number");
    scanf("%d", &y);
    printf("Before Swapping: First Number = %d, Second Number = %d \n", x, y);

    int temp = x;
    x = y;
    y = temp;

    printf("After Swapping: First Number = %d, Second Number = %d", x, y);
    return 0;
}
