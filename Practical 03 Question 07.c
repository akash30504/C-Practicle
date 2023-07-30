#include <stdio.h>
int main()
{
    double basicSalary, sales, grossRemuneration;
    char city;

    printf("Enter the Basic Salary: ");
    scanf("%lf", &basicSalary);

    printf("Enter the Monthly Sales (in Rs.): ");
    scanf("%lf", &sales);

    printf("Enter the city (C for Colombo, any other character for other cities): ");
    scanf(" %c", &city);

    double additionalAllowance = 0.0;
    printf("Enter the years of service: ");
    int yearsOfService;
    scanf("%d", &yearsOfService);
    if (yearsOfService > 5) {
        additionalAllowance = 0.1 * basicSalary;
    }

    if (city == 'C') {
        additionalAllowance += 2500.0;
    }

    double bonusPercentage;
    if (sales >= 50000) {
        bonusPercentage = 0.15;
    } else if (sales >= 25000) {
        bonusPercentage = 0.12;
    } else {
        bonusPercentage = 0.10;
    }
    double bonus = bonusPercentage * sales;

    grossRemuneration = basicSalary + additionalAllowance + bonus;

    printf("Gross Monthly Remuneration: Rs. %.2f\n", grossRemuneration);

}
