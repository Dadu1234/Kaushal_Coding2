#include<stdio.h>
#include<stdlib.h>
int PeakElement(int[],int);
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
  
  iRet = PeakElement(ptr,iLength);
  
  printf("Peak element is %d\n",iRet);
  
  return 0;
}
int PeakElement(int Arr[],int iSize)
{
  int i = 0;
  for(i = 1;i < iSize-1;i++)
  {
    if((Arr[i] > Arr[i+1]) && (Arr[i] >` Arr[i-1]))
	{
	  return i;
	  break;
	}
  }
}