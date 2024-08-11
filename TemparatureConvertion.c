# include<stdio.h>

int main() {
    float c, f;
    printf("Enter Celsius(°C): ");
    scanf("%f", &c);
    // Taking Celsius
    f = (c * 1.8) + 32;
    printf("\nTempareture in Fahrenheit(°C): %f", f);
    // °F as Output

    float d, e;
    printf("\nEnter Fahrenheit(°F): ");
    scanf("%f", &d);
    // °F as Output
    e = (d - 32) / 1.8;
    printf("\nTempareture in Celsius(°C): %f", e);
    // Taking Celsius
}