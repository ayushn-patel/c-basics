//this program can be used to find the GCD and LCM of any two whole numbers
#include<stdio.h>
int main()
{
    int a,r,l,b;
    printf("Enter the first number-\n");
    scanf("%d",&a);//read the first number
    printf("Enter the second number-\n");
    scanf("%d",&b);//read the second number
    int x=a;
    int y=b;
    while(b!=0)//while loop
    {
        r=a%b;
        a=b;
        b=r;
    }
    l=(x*y)/a;
    printf("GCD=%d & LCM=%d\n",a,l);//print the values of GCD and LCM
    return 0;
}