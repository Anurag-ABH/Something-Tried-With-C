# include<stdio.h>

int main() {
    int a, b, c;
    printf("\nENter The Bigger Number: ");
    scanf("%d", &a);
    printf("\nEnter The Smaller Number: ");
    scanf("%d", &b);
    c = a % b;
    printf("\nThe Reminder is: %d", c);
}