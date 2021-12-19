#include<stdio.h>
#include<string.h>
void swap(char[],int,int);
void printArray(char[],int);
void printPermutation(char[],int,int);
int main()
{
  char Arr[30];
  int iLength = 0;
  int index = 0;
  printf("Enter number in the format of string\n");
  scanf("%s",Arr);
  
  iLength = strlen(Arr);
  
  printf("Enter current index\n");
  scanf("%d",&index);
  
  printPermutation(Arr,iLength,index);
  
  return 0;
}
void printPermutation(char Brr[],int iSize,int cid)
{
  int i = 0;
  if(cid==(iSize-1))
  {
    printArray(Brr,iSize);
  }
  for(i=cid;i<iSize;i++)
  {
    swap(Brr,i,cid);
	printPermutation(Brr,iSize,cid+1);
	swap(Brr,i,cid);
  }
}
void printArray(char Crr[],int iSize1)
{
  int j = 0;
  for(j=0;j<iSize1;j++)
  {
    printf("%c\t",Crr[j]);
  }
}
void swap(char arr[],int i,int j)
{
	int temp = 0;
	temp = i;
	i = j;
	j = temp;
}