#include <stdio.h>
int main()
{
  int num1, num2;
  float average;
  printf("Enter the first number: ");
  scanf("%d",&num1);
  printf("Enter the second number: ");
  scanf("%d",&num2);
  average= (float)(num1 + num2)/2;
  printf("The Average of %d and %d is: %.2f",num1,num2,average);
  return 0;
}
