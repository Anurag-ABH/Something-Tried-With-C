# include<stdio.h>

int main() {
    float principal, time, rate;
    printf("\nEnter Principal Amount: ");
    scanf("%f", &principal);
    // Taking Principal
    printf("\nEnter Time: ");
    scanf("%f", &time);
    // Taking Time
    printf("\nEnter Rate of Interest: ");
    scanf("%f", &rate);
    // Taking Rate
    float interest = (principal * time * rate) / 100;
    printf("\nThe Total Interest is: %f", interest);
    // Print Interest Only
    printf("\nThe Total Amount is: %f", principal + interest);
    // Print Total Amount
}