#include<stdio.h>
#include<stdlib.h>
int RemoveDuplicate(int[],int);
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
  
  iRet = RemoveDuplicate(ptr,iLength);
  
  printf("Size of Array of non duplicate elements is %d\n",iRet);
  
  return 0;
}
int RemoveDuplicate(int Arr[],int iSize)
{
  int iResult = 0;
  int i = 0;
  int j = 0;
  iResult = iSize;
  
  for(i = 0;i < iSize;i++)
  {
    for(j = i + 1;j < iSize;j++)
	{
	  if(Arr[i]== Arr[j])
	  {
	    iResult = iResult - 1;
	  }
	}
  }
  return iResult;
}
  