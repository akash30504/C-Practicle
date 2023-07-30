#include<stdio.h>
int main()
{
    int base, exponent, result = 1;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    int i;
    for (i = 0; i < exponent; i++) {
        result *= base;
    }

    printf("%d raised to the power %d is: %d\n", base, exponent, result);
}
