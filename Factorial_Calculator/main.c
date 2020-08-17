#include <stdio.h>
int factorialiterative(int n);
int main()
{
    int n;
    printf("Enter A Number For Factorail Calculation : ");
    scanf("%d", &n);

    int factorial = factorialiterative(n);
    printf("The Factorial Of The Given Number Is %d", factorial);
    return 0;
}

int factorialiterative(int n)
{
    int val = 1;
    for (int i = n; i > 1; i--)
    {
        val *= i;
    }
    return val;
}