#include<stdio.h>
#include<stdlib.h>
void FindIndices(int[],int,int);
int main()
{
  int iLength = 0;
  int iCnt = 0;
  int *ptr = NULL;
  int iTargeted = 0;
  
  printf("Enter length of array\n");
  scanf("%d",&iLength);
  
  ptr = (int *)malloc(iLength*sizeof(int));
  
  printf("Enter %d elements\n",iLength);
  
  for(iCnt = 0;iCnt < iLength;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  printf("Enter targeted element\n");
  scanf("%d",&iTargeted);
  
  FindIndices(ptr,iLength,iTargeted);
  
  return 0;
}
void FindIndices(int Arr[],int iSize,int iNumber)
{
  int i = 0;
  for(i = 0;i < iSize;i++)
  { 
    if(Arr[i] == iNumber)
	{
	  printf("[%d,]",i);
	}
  }
}