#include<stdio.h>
#include<stdlib.h>
void FourSum(int[],int,int);
int main()
{
  int *ptr = NULL;
  int iCnt = 0;
  int iLength = 0;
  int iTarget = 0;
  
  printf("Enter length of array\n");
  scanf("%d",&iLength);
  
  ptr = (int *)malloc(iLength*sizeof(int));
  
  printf("Enter %d elements\n",iLength);
  
  for(iCnt = 0;iCnt < iLength;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  printf("Enter targeted sum\n");
  scanf("%d",&iTarget);
  
  FourSum(ptr,iLength,iTarget);
  
  return 0;
}
void FourSum(int Arr[],int iSize,int iValue)
{
  int i = 0;
  int j = 0;
  int k = 0;
  int l = 0;
  
  for(i = 0;i < iSize - 3;i++)
  {
    for(j = i + 1;j < iSize - 2;j++)
	{
	  for(k = j + 1;k < iSize - 1;k++)
	  {
	    for(l = k + 1;l < iSize;l++)
		{
		  if((Arr[i] + Arr[j] + Arr[k] + Arr[l]) == iValue)
		  {
            break;
		  }
		}
	  }
	 }
  }
  if((Arr[i] + Arr[j] + Arr[k] + Arr[l]) == iValue)
  {
	  printf("[%d,%d,%d,%d]",Arr[i],Arr[j],Arr[k],Arr[l]);
  }
	  
  
}