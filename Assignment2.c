//A number is said to be valid if it is divisible by 8. Write a program that allows the user to keep entering numbers as long as the input is valid and also displays a count of the valid numbers. Use a while loop to complete the task

#include<stdio.h>
int main()
{
	int i=0;
	while (1)
	{
		int num;
		printf("Enter a number: ");
		scanf("%d",&num);
		if (num%8 != 0)
		{
			break;
		}
		else
		{
			i++;
		}
	}
	printf("Number of valid input numbers: %d",i);
	return 0;
}
