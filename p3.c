//this program can be used to find the number of digits in a number
#include<stdio.h>
int main()
{
   int n,count=0;
    printf("Enter the number-\n");
    scanf("%d",&n);//read the number
    while(n!=0)//while loop
    {
        count++;
        n=n/10;
    }
printf("number of digits =%d\n",count);//print the number of digits calculated in the while loop
return 0;
}
