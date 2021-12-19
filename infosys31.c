#include<stdio.h>
#include<stdlib.h>
void TwoSum(int[],int,int);

int main()
{
  int *ptr = NULL;
  int iLength = 0;
  int iCnt = 0;
  int iTargeted = 0;
  
  printf("Enter length of array\n");
  scanf("%d",&iLength);
  
  ptr = (int *)malloc(iLength*sizeof(int));
  
  printf("Enter %d elements\n",iLength);
  
  for(iCnt = 0;iCnt < iLength;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  printf("Enter targeted sum\n");
  scanf("%d",&iTargeted);
  
  TwoSum(ptr,iLength,iTargeted);
  
  return 0;
}

void TwoSum(int Arr[],int iSize,int iValue)
{
  int i = 0;
  int j = 0;
  
  int iSum = 0;
  
  for(i = 0;i < iSize - 1;i++)
  {
	  for(j = i + 1;j < iSize;j++)
	  {
		  if(Arr[i] + Arr[j] == iValue)
		  {
			  printf("[%d,%d]",i+1,j+1);
		  }
	  }
  }
}
  