#include <stdio.h>

float fahrenheitToCelsius(float fahrenheit) {
    float celsius = (5.0 / 9.0) * (fahrenheit - 32);
    return celsius;
}

int main()
{
    float temperatures[] = {68, 150, 212, 0, -22, -200};
    int numTemperatures = sizeof(temperatures) / sizeof(temperatures[0]);

    for (int i = 0; i < numTemperatures; i++) {
        float temperatureFahrenheit = temperatures[i];
        float temperatureCelsius = fahrenheitToCelsius(temperatureFahrenheit);
        printf("Fahrenheit %.2f = Celsius %.2f \n", temperatureFahrenheit, temperatureCelsius);
    }

    return 0;
}
