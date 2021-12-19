#include<stdio.h>
#include<stdlib.h>
int MaxArea(int[],int);
int main()
{
  int *ptr = NULL;
  int iCnt = 0;
  int iLength = 0;
  int iRet = 0;
  
  printf("Enter size of array\n");
  scanf("%d",&iLength);
  
  ptr = (int *)malloc(iLength*sizeof(int));
  
  printf("Enter %d elements\n",iLength);
  
  for(iCnt = 0;iCnt < iLength;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  iRet = MaxArea(ptr,iLength);
  
  printf("Maximum area is %d\n",iRet);
  
  return 0;
}
int MaxArea(int Arr[],int iSize)
{
  int i = 0;
  int j = 0;
  int iResult = 0;
  
  for(i = iSize - 1;i >= 0;i--)
  {
    for(j = 0;j < iSize;j++)
	{
	  if(Arr[j] >= Arr[i])
	  {
	    iResult = (Arr[i]) * (i - j);
		return iResult;
	  }
	}
  }
  
}
	  