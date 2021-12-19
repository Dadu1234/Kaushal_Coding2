#include<stdio.h>
#include<stdlib.h>
int MaxProduct(int[],int);

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
  
  iRet = MaxProduct(ptr,iLength);
  
  printf("Maximum product is %d\n",iRet);
  
  return 0;
}
int MaxProduct(int Arr[],int iSize)
{
  int i = 0;
  int iMult = 1;
  int iMax = 0;
  int j = 0;
  int k = 0;
  int iCount = 0;
  int Crr[50];
  for(i = 0;i < iSize-1;i++)
  {
	iMult = 1;
    for(j = i;j >= 0;j--)
	{
	  iMult = iMult*Arr[j];
	  Crr[iCount] = iMult;
	  iCount++;
	}
  }
  
  iMax = Crr[0];
  
  for(k = 1;k < iCount;k++)
  {
    if(Crr[k] > iMax)
	{
	  iMax = Crr[k];
	}
  }
  return iMax;
}