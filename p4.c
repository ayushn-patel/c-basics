//this program can be used to find the factorial of a number
//this program is also an introduction to functions in C
#include<stdio.h>
#include<stdlib.h>

int fact(int n)
{
int f;

    if( n==1)
    {
        return 1;
    }
    else
    {
        f=n*fact(n-1);
    }
    return f;
}

int main()
{
    int n;
    printf("Enter the number \n");
    scanf("%d",&n);//read the number
    printf("Factorial of a number =% d \n",fact(n));//calling function fact
    return 0;
}