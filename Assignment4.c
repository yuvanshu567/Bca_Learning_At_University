//Write a C code to find the maximum element in each row of the 3 X 3 matrix

#include<stdio.h>
int main()
{
	int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	for(int row=0;row<3;row++)
	{
		int max=matrix[row][0];
		for(int col=1;col<3;col++)
		{
			if(matrix[row][col] > max)
			{
				max=matrix[row][col];
			}
		}
		printf("Maximum value in row%d is %d\n",row+1,max);
	}
	return 0;
}
