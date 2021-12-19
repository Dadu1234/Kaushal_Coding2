#include<stdio.h>
#include<stdlib.h>
int coinChange(int[],int,int);
int main()
{
  int iLength = 0;
  int iCnt = 0;
  int *ptr = NULL;
  int iRet = 0;
  int iAmt = 0;
  
  printf("Enter length of array\n");
  scanf("%d",&iLength);
  
  ptr = (int *)malloc(iLength*sizeof(int));
  
  printf("Enter %d elements\n",iLength);
  
  for(iCnt = 0;iCnt < iLength;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  printf("Enter amount\n");
  scanf("%d",&iAmt);
  
  iRet = coinChange(ptr,iLength,iAmt);
  
  printf("Minimum number of coins are %d\n",iRet);
  
  return 0;
}
int coinChange(int Arr[],int iSize,int Amount)
{
  int i = 0;
  int j = 0;
  int temp = 0;
  int iCount = 0;
  int iSub = 0;
  int iMult = 1;
  int iRet = 0;
  
  for(i = 0;i < iSize - 1;i++)
  {
    for(j = i + 1;j < iSize;j++)
	{
	  if(Arr[i] < Arr[j])
	  {
	    temp = 	Arr[i];
		Arr[i] = Arr[j];
		Arr[j] = temp;
	  }
	}
  }
  
  for(i = 0;i < iSize;i++)
  {
    iCount = Amount / Arr[i];
	if(iCount > 0)
	{
	   iMult = Arr[i] * iCount;
	   iSub = Amount - iMult;
	}
	for(j = i + 1;j < iSize;j++)
	{
	  if(iSub % Arr[j] == 0)
	  {
	    iRet = iCount + (iSub / Arr[j]);
		break;
	  }
	 }
  }
  return iRet;
}

	
	
	    
  
  
  