#include <stdio.h>
int main()
{
    double number;

    printf("Enter a number: ");
    scanf("%lf", &number);

    if (number <= 0.0)
    {
        if (number == 0.0)
            printf("Ynumber is 0");
        else
            printf("number is negative number.");
    }
    else
        printf("You entered a positive number.");
    return 0;
}
