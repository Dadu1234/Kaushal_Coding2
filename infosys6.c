#include<stdio.h>
#include<stdlib.h>
void threeSum(int[],int);
int main()
{
  int *ptr = NULL;
  int iCnt = 0;
  int iLength = 0;
  
  printf("Enter length of array\n");
  scanf("%d",&iLength);
  
  ptr = (int *)malloc(iLength*sizeof(int));
  
  printf("Enter %d elements\n",iLength);
  
  for(iCnt = 0;iCnt < iLength;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  threeSum(ptr,iLength);
  
  return 0;
}
void threeSum(int Arr[],int iSize)
{
  int i = 0;
  int j = 0;
  int k = 0;
  
  for(i = 0;i < iSize - 2;i++)
  {
    for(j = i + 1;j < iSize - 1;j++)
	{
	  for(k = j + 1;k < iSize;k++)
	  {
	    if((Arr[i] + Arr[j] + Arr[k] == 0) && (i!=j) && (j!=k) && (k!=i))
		{
		  printf("[%d,%d,%d]",Arr[i],Arr[j],Arr[k]);
		}
	  }
	}
  }
}