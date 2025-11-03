/*
Name:Ronix otieno
Registration number:PA106/G/28800/25
Description:Array definition,initializtion and 
*/
#include <stdio.h>
int main()
{
	int scores[4][2]={{65,92},
	{84,72},{35,70},{59,67}};
printf("The elements of the array:\n");
for(int i=0;i<4;i++){
	for(int j=0;j<2;j++){
		printf("scores[%d][%d]=%d\n",i,j,scores[i][j]);
	}
}
	printf("\n");
	return 0;
}
