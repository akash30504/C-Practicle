#include<stdio.h>
int main()
{
    float radius, area, circumference, diameter, PI=3.14;

    printf("Enter the radius of a circle: ");
    scanf("%f",&radius);

    printf("Diameter of a Circle = %.2f \n", 2*radius);
    printf("Circumference of a Circle = %.2f \n", 2*PI*radius);
    printf("Area of a Circle = %.2f \n", PI*radius*radius);
}



