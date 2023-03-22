//Can you help your digital design faculty in correcting the assignment on number conversions by writing a program to convert a decimal number to its binary equivalent using a while loop.
//Example, lets say input is 7, output should be 111

#include<stdio.h>
int main()
{
	int num,temp,rem,bin=0,place=1;
	printf("Enter the Decimal Number: ");
	scanf("%d",&num);
	temp=num;
	while (temp>=1)
	{								
		rem=temp%2;
 		bin=bin+(rem*place);
 		place *=10;
		temp=temp/2;
	}
	printf("The binary conversion of %d is %d",num,bin);
	return 0;
}
