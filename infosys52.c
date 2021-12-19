#include<stdio.h>
#include<stdlib.h>
void countSmaller(int[],int);
int main()
{
  int iLength = 0;
  int iCnt = 0;
  int *ptr = NULL;
  
  printf("Enter length of array\n");
  scanf("%d",&iLength);
  
  ptr = (int *)malloc(iLength*sizeof(int));
  
  printf("Enter %d elements\n",iLength);
  
  for(iCnt = 0;iCnt < iLength;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  countSmaller(ptr,iLength);
  
  return 0;
}
void countSmaller(int Arr[],int iSize)
{
  int i = 0;
  int j = 0;
  int iCount = 0;
  int Crr[50];
  
  for(i = 0;i < iSize;i++)
  {
	iCount = 0;
    for(j = i + 1;j < iSize;j++)
	{
	  if(Arr[j] < Arr[i])
	  {
	    iCount++;
	  }
	}
	Crr[i] = iCount;
  }
  
  for(i = 0;i < iSize;i++)
  {
    printf("%d\t",Crr[i]);
  }
}
  