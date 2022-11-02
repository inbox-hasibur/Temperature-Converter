#include <stdio.h>
int main() {
    // Celsius to Fahrenheit: F = 9/5 * C + 32
    float c, f;
    scanf("%f", &c);
    f = 9/5 * c + 32;
    printf("Fahrenheit = %f", f);

    // Celsius to Kelvin: K = C-273.15
    float c, k;
    scanf("%f", &c);
    k = c - 273.15;
    printf("Fahrenheit = %f", k);

    // Fahrenheit to Celsius : C = (F-32) * 5/9
    float c, f;
    scanf("%f", &f);
    c = (f-32) * 5/9;
    printf("Kelvin = %f", c);

    // Fahrenheit to Kelvin : K = (F-32) * 5/9 + 273.15
    float k, f;
    scanf("%f", &f);
    k = (f-32) * 5/9 + 273.15;
    printf("Kelvin = %f", k);

    // Kelvin to Celsius : C = K+273.15
    float c, k;
    scanf("%f", &k);
    c = k + 273.15;
    printf("Fahrenheit = %f", c);

    // Kelvin to Fahrenheit : F = (K-273.15) * 9/5 + 32
    float k, f;
    scanf("%f", &k);
    f = (k-273.15) * 9/5 + 32;
    printf("Kelvin = %f", f);

    return 0;
}
