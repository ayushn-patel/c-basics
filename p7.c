//this program can be used to find the sum of  the individual digits in a number 
#include <stdio.h>

int main() {
	
	printf("Enter the number-");
	int num;
	scanf("%d",&num);//read  the number
	int sum=0,dig=0;
	while(num>0)
	{
	    dig=num%10;
	    sum=sum+dig;
	    num=num/10;
	}
	printf("The sum of digits of a number is: %d",sum);
	return 0;
}