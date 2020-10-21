//this program can be used to convert binary nuimbers to decimal numbers
#include <stdio.h>
#include <math.h>
int convertBinaryToDecimal(long long n);
int main()
{
    long long n;
    printf("Enter a binary number: ");
    scanf("%lld", &n);
    printf("%lld in binary = %d in decimal", n, convertBinaryToDecimal(n));
    return 0;
}
int convertBinaryToDecimal(long long n)
{
    int decimalnumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalnumber += remainder*pow(2,i);
        ++i;
    }
    return decimalnumber;
}