#include<stdio.h>
#include<stdlib.h>
int MaxProfit(int[],int);
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
  
  iRet = MaxProfit(ptr,iLength);
  
  printf("Maximum profit is %d\n",iRet);
  
  return 0;
}
int MaxProfit(int Arr[],int iSize)
{
  int i = 0;
  int j = 0;
  int BuyPrice = 0;
  int SellPrice = 0;
  int BuyIndex = 0;
  int iProfit = 0;
  
  BuyPrice = Arr[0];
  
  for(i = 1;i < iSize;i++)
  {
    if(Arr[i] < BuyPrice)
	{
	  BuyPrice = Arr[i];
	  BuyIndex = i;
	}
  }
  
  SellPrice = BuyPrice;
  
  for(j = BuyIndex + 1;j < iSize;j++)
  {
    if(Arr[j] > SellPrice)
	{
	  SellPrice = Arr[j];
	}
  }
  printf("Selling price is %d\n",SellPrice);
  iProfit = SellPrice - BuyPrice ;
  
  return iProfit;
}
  