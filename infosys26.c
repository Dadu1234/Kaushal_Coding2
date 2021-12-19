#include<stdio.h>
#include<stdlib.h>
int Profit(int[],int);
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
  
  iRet = Profit(ptr,iLength);
  
  printf("Profit is %d\n",iRet);
  
  return 0;
}
int Profit(int Arr[],int iSize)
{
  int i = 0;
  int iDiff = 0;
  int iSum = 0;
  int iBuy = 0;
  int iSell = 0;
  int BuyIndex = 0;
  int SellIndex = 0;
  
  iBuy = Arr[0];
  
  for(i = 1;i < iSize;i++)
  {
    if(Arr[i] < iBuy)
	{
	  iBuy = Arr[i];
	  BuyIndex = i;
	}
   }
   
   iSell = Arr[BuyIndex];
   for(i = BuyIndex + 1;i < iSize;i++)
   {
     if(Arr[i] > Arr[i-1])
	 {
	   iDiff = Arr[i] - Arr[i - 1];
	   iSum = iSum + iDiff;
	 }
   }
   
   return iSum;
}
  
    