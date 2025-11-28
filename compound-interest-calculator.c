#include <stdio.h>
#include <math.h>

int main()
{

    // Compound Interest Calculator

    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesComponded = 0;
    double total = 0;

    printf("Compound Interest Calculator\n");

    printf("Enter the principal: (P) ");
    scanf("%lf", &principal);

    printf("Enter the interest rate % (r): ");
    scanf("%lf", &rate);
    rate = rate / 100;

    printf("Enter the # of years (t): ");
    scanf("%d", &years);

    printf("Enter # of times componded per year (n): ");
    scanf("%d", &timesComponded);

    total = principal * pow(1 + rate / timesComponded, timesComponded * years);
    
    printf("After %d years, the total will be $%.2lf", years, total);

    return 0;
}