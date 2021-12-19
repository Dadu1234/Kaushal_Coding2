#include<stdio.h>
#include<stdlib.h>
int StartingIndex(int[],int);
int main()
{
  int iPumps = 0;
  int iRet = 0;
  int *ptr = NULL;
  int iCnt = 0;
  int iLength = 0;
  
  printf("Enter number of petrolpumps\n");
  scanf("%d",&iPumps);
  
  iLength = 2*iPumps;
  
  printf("Enter %d elements\n",iLength);
  
  ptr = (int *)malloc(iLength*sizeof(int));
  
  
  
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  iRet = StartingIndex(ptr,iLength);
  
  printf("Start from index %d\n",iRet);
  return 0;
}
int StartingIndex(int Arr[],int iSize)
{
  int i = 0;
  int j = 0;
  for(i=1;i<(iSize-1);i=i+2)
  {
    for(j=i+2;j<iSize;j=j+2)
	{
	  if((Arr[i]-Arr[j])==0)
	  {
	     return i/2;
		 break;
	  }
	}
  }
}