#include <stdio.h>
#include <math.h>
int x(long long n);
int main()
{
    long long n;
    printf("Enter a binary number: ");
    scanf("%lld", &n);
    printf("%lld in binary = %d in decimal", n, x(n));
    return 0;
}
int x(long long n)
{
    int y = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        y += remainder*pow(2,i);
        ++i;
    }
    return y;
}