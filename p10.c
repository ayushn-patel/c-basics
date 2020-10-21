//this program is used to determine if a number is a strong number or not
#include <stdio.h>

int main()
{
    int n, f = 1, s = 0, r, i, n1;
    scanf("%d", &n);
    n = n1;
    while (n)
    {
        r = n % 10; // Taking the last digit of the number
        for (i = 1; i <= r; i++)
        {
            f = f * i;
        }
        s = s + f;
        n /= 10;
    }
    if (s == n1)
        printf("Strong number");
    else
        printf("Not a Strong number");
    return 0;


}