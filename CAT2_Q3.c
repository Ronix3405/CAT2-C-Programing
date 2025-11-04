/*
Name:Ronix otieno
Registration number:PA106/G/28800/25
Description:File handling
*/
#include<stdio.h>
#include<stdlib.h>
void WriteInputFile(){
	FILE*fptr;
	int num,i;
fptr=fopen("input.txt","w");
if(fptr==NULL){
	printf("Error opening input.txt for writing!\n");
	exit(1);
}
printf("Enter 10 integers:\n");
for(i=0;i<10;i++){
	printf("Integer %d:",i+1);
	scanf("%d",&num);
fprintf(fptr,"%d\n",num);
}
fclose(fptr);
printf("Data succcessfully written to input.txt\n\n");
}
void processFiles(){
	FILE*fin,*fout;
	int num,sum=0,count=0;
	float average;
fin=fopen("input.txt","r");
if(fin==NULL){
	printf("Error opening input.txt for reading!\n");
exit(1);
}
while(fscanf(fin,"%d",&num)==1){
	sum+=num;
	count++;
}
fclose(fin);
if(count==0){
	printf("No data found in input.txt!\n");
	exit(1);
}
average=(float)sum/count;
fout=fopen("output.txt","w");
if(fout==NULL){
	printf("Error opening output.txt for writing1\n");
	exit(1);
}
fprintf(fout,"sum=%d\nAverage =%.2f\n",sum,average);
fclose(fout);
printf("sum and average written to output.txt\n\n");
}
void displayFiles(){
	FILE*fin,*fout;
	char ch;
printf("contents of input.txt:\n");
fin=fopen("input.txt","r");
if(fin==NULL){
printf("Error opening input.txt for reading!\n");
exit(1);
}
while((ch=fgetc(fin))!=EOF)
	putchar(ch);
    fclose(fout);
    printf("\n");
}
int main()
{
	WriteInputFile();
	processFiles();
	displayFiles();
	return 0;
}

