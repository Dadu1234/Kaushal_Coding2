#include<stdio.h>
#include<stdlib.h>
int singleNumber(int[],int);
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
  iRet = singleNumber(ptr,iLength);
  
  printf("Single number is %d\n",iRet);
  
  return 0;
}
int singleNumber(int Arr[],int iSize)
{
  int i = 0;
  int iCount = 0;
  int j = 0;
  
  for(i = 0;i < iSize;i++)
  {
	  for(j = 0;j < iSize;j++)
	  {
		  if(i!=j)
		  {
			  if(Arr[i] == Arr[j])
			  {
				  break;
			  }
		  }
	  }
	  if(j==iSize)
	  {
		  return Arr[i];
	  }
  }
 
}