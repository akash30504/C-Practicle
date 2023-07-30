#include<stdio.h>
int main()
{
    int n = 10;
    int fib[n];
    int i;

    fib[0] = 0;
    fib[1] = 1;

    for (i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    printf("The first 10 numbers of the Fibonacci sequence are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");
}
