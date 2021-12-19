#include<stdio.h>
#include<stdlib.h>
int removeDuplicate(int[],int,int);

int main()
{
  int *ptr = NULL;
  int iCnt = 0;
  int iLength = 0;
  int iRet = 0;
  int iValue = 0;
  
  printf("Enter length of array\n");
  scanf("%d",&iLength);
  
  ptr = (int *)malloc(iLength*sizeof(int));
  
  printf("Enter %d elements\n",iLength);
  
  for(iCnt = 0;iCnt < iLength;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  printf("Enter the data\n");
  scanf("%d",&iValue);
  
  iRet = removeDuplicate(ptr,iLength,iValue);
  
  printf("Result is %d\n",iRet);
  
  return 0;
}
int removeDuplicate(int Arr[],int iSize,int iNumber)
{
  int i = 0;
  int iCount = 0;
  int iResult = 0;
  
  for(i = 0;i < iSize;i++)
  {
     if(iNumber == Arr[i])
	 {
	   iCount++;
	 }
  }
  
  iResult = iSize - iCount;

  return iResult;
}