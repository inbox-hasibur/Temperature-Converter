#include <stdio.h>
int main() 
{
    int x;
    printf("Chose Conversion menu :\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Celsius to Kelvin\n");
    printf("3. Fahrenheit to Celsius\n");
    printf("4. Fahrenheit to Kelvin\n");
    printf("5. Kelvin to Celsius\n");
    printf("6. Kelvin to Fahrenheit\n");
    printf("Enter Your Choice : ");
    scanf("%d", &x);

    switch(x)
    {
        case 1: 
        {
        // Celsius to Fahrenheit: F = 9/5 * C + 32
        float c, f;
        printf("Enter Celsius : ");
        scanf("%f", &c);
        f = 9/5 * c + 32;
        printf("Fahrenheit = %f", f);
        return 0;
        }

        case 2: 
        {
        // Celsius to Kelvin: K = C-273.15
        float c, k;
        printf("Enter Celsius : ");
        scanf("%f", &c);
        k = c - 273.15;
        printf("Fahrenheit = %f", k);
        return 0;
        }

        case 3: 
        {
        // Fahrenheit to Celsius : C = (F-32) * 5/9
        float c, f;
        printf("Enter Fahrenheit : ");
        scanf("%f", &f);
        c = (f-32) * 5/9;
        printf("Celsius = %f", c);
        return 0;
        }

        case 4: 
        {
        // Fahrenheit to Kelvin : K = (F-32) * 5/9 + 273.15
        float k, f;
        printf("Enter Fahrenheit : ");
        scanf("%f", &f);
        k = (f-32) * 5/9 + 273.15;
        printf("Kelvin = %f", k);
        return 0;
        }

        case 5: 
        {
        // Kelvin to Celsius : C = K+273.15
        float c, k;
        printf("Enter Kelvin : ");
        scanf("%f", &k);
        c = k + 273.15;
        printf("Celsius = %f", c);
        return 0;
        }

        case 6: 
        {
        // Kelvin to Fahrenheit : F = (K-273.15) * 9/5 + 32
        float k, f;
        printf("Enter Kelvin : ");
        scanf("%f", &k);
        f = (k-273.15) * 9/5 + 32;
        printf("Fahrenheit = %f", f);
        return 0;
        }
    }
    return 0;
}
