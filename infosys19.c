#include<stdio.h>
#include<stdlib.h>
int removeDuplicates(int[],int);
int main()
{
  int *ptr = NULL;
  int iCnt = 0;
  int iLength = 0;
  int iRet = 0;
  
  printf("Enter length of array\n");
  scanf("%d",&iLength);
  
  ptr = (int *)malloc(iLength*sizeof(int));
  
  printf("Enter %d elements\n",iLength);
  
  for(iCnt = 0;iCnt < iLength;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  iRet = removeDuplicates(ptr,iLength);
  
  printf("Result is %d\n",iRet);
  
  return 0;
}
int removeDuplicates(int Arr[],int iSize)
{
  int i = 0;
  int j = 0;
  int iCount = 0;
  int iRet = 0;
  int iSum = 0;
  for(i = 0;i < iSize;i++)
  {
    iCount = 1;
	if(iCount > 1)
	{
	  break;
	}
    for(j = i + 1;j < iSize;j++)
	{
	  if(Arr[i] == Arr[j])
	  {
	    iCount++;
	  }
	}
	if(iCount > 2)
	{
	  iSum = iSum + 1;
	}
  }
  iRet = iSize - iSum;
  return iRet;
}