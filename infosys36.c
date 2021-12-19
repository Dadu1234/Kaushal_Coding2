#include<stdio.h>
#include<stdlib.h>
int rob(int[],int);
int main()
{
  int iLength = 0;
  int *ptr = NULL;
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
  
  iRet = rob(ptr,iLength);
  
  printf("Maximum amount is %d\n",iRet);
 
  return 0;
}
int rob(int Arr[],int iSize)
{
  int i = 0;
  int iSum1 = 0;
  int iSum2 = 0;
  int iSum3 = 0;
  if(iSize%2==0)
  {
    for(i = 0;i < iSize;i++)
	{
	  if(i%2==0)
	  {
	     iSum1 = iSum1 + Arr[i];
	  }
	  else
	  {
	     iSum2 = iSum2 + Arr[i];
	  }
	}
	if(iSum1 > iSum2)
	{
	  return iSum1;
	}
	else
	{
	  return iSum2;
	}
  }
  if(iSize%2!=0)
  {
    for(i = 0;i < iSize;i++)
	{
	   if(i%2!=0)
	   {
	     iSum3 = iSum3 + Arr[i];
	   }
	 }
	 return iSum3;
   }
}