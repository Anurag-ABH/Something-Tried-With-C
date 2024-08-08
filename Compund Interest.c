# include<stdio.h>
# include<math.h>

int main() {
    float principal, rate, amount, time, n, ci;

    // Input Principal, Rate, CI and Time
    printf("\nEnter Principal(Amount): ");
    scanf("%f", &principal);
    printf("\nEnter Rate of Interest: ");
    scanf("%f", &rate);
    printf("\nEnter Time: ");
    scanf("%f", &time);
    printf("\nEnter Number of Times Interest Applied Per Time Period: ");
    scanf("%f", &n);

    // Calculate Compound Interest
    amount = principal * pow((1 + (rate / n / 100)), (n * time));
    ci = amount - principal;

    // Print Amount
    printf("\nTotal Amount: %f", amount);
    printf("\nTotal Interest: %f", ci);
    return 0;
}