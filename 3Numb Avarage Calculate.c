# include<math.h>
# include<stdio.h>

int main() {
    float x, y, z, a;
    // Taking 3 number
    printf("\nEnter 1st Number: ");
    scanf("%f", &x);
    printf("\nEnter 2nd Number: ");
    scanf("%f", &y);
    printf("\nEnter 3ed Number: ");
    scanf("%f", &z);
    // Calculate the avarage
    a = (x + y + z) / 3;
    printf("\nThree Number's Avarage is: %f \n", a);
}