#include<stdio.h>
#include<stdlib.h>
int MaxDifference(int[],int);

int main()
{
  int *ptr = NULL;
  int iLength = 0;
  int iCnt = 0;
  int iRet = 0;
  
  printf("Enter length of array\n");
  scanf("%d",&iLength);
  
  ptr = (int *)malloc(iLength*sizeof(int));
  
  printf("Enter %d elements\n",iLength);
  
  for(iCnt = 0;iCnt < iLength;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  iRet = MaxDifference(ptr,iLength);
  
  printf("Maximum successive difference is %d\n",iRet);
  
  return 0;
}
int MaxDifference(int Arr[],int iSize)
{
  int i = 0;
  int iDiff = 0;
  int Crr[50];
  int iCount = 0;
  int iMax = 0;
  
  for(i = 1;i < iSize-1;i++)
  {
    iDiff = Arr[i+1] - Arr[i];
	Crr[iCount] = iDiff;
    iCount++;
  }
  iMax = Crr[0];
  
  for(i = 0;i < iCount;i++)
  {
    if(Crr[i] > iMax)
	{
	  iMax = Crr[i];
	}
  }
  
  return iMax;
}
  