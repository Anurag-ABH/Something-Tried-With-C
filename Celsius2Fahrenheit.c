# include<stdio.h>

int main() {
    float c, f;
    printf("Enter Celsius(°C): ");
    scanf("%f", &c);
    // Taking Celsius
    f = (c * 1.8) + 32;
    printf("\nTempareture in Fahrenheit(°C): %f", f);
    // °F as Output
}