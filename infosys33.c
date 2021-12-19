#include<stdio.h>
#include<stdlib.h>
int MaxProfit(int[],int,int);
int main()
{
  int iLength = 0;
  int *ptr = NULL;
  int iCnt = 0;
  int iRet = 0;
  int iChance = 0;
  
  printf("Enter length of array\n");
  scanf("%d",&iLength);
  
  ptr = (int *)malloc(iLength*sizeof(int));
  
  printf("Enter %d elements\n",iLength);
  
  for(iCnt = 0;iCnt < iLength;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  printf("Enter number of transactions\n");
  scanf("%d",&iChance);
  
  iRet = MaxProfit(ptr,iLength,iChance);
  
  printf("Maximum profit is %d\n",iRet);
  
  return 0;
}
int MaxProfit(int Arr[],int iSize,int k)
{
  int i = 0;
  int iSum = 0;
  int iDiff = 0;
  int j = 0;
  
  for(j = 0;j < k;j++)
  {
    for(i = 0;i < iSize - 1;i++)
	{
	  if(Arr[i+1] > Arr[i])
	  {
	    iDiff = Arr[i+1] - Arr[i];
		iSum = iSum + iDiff;
	  }
	}
  }
  return (iSum/2);
}