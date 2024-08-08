# include<stdio.h>

int main() {
    float principal, time, rate;
    printf("\nEnter Principal Amount: ");
    scanf("%f", &principal);
    printf("\nEnter Time: ");
    scanf("%f", &time);
    printf("\nEnter Rate of Interest: ");
    scanf("%f", &rate);
    float interest = (principal * time * rate) / 100;
    printf("\nThe Total Interest is: %f", interest);
    printf("\nThe Total Amount is: %f", principal + interest);
}