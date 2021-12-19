#include<stdio.h>
#include<stdlib.h>
void SingleNumber(int[],int);
int main()
{
  int *ptr = NULL;
  int iLength = 0;
  int iCnt = 0;
  
  printf("Enter length of array\n");
  scanf("%d",&iLength);
  
  ptr = (int *)malloc(iLength*sizeof(int));
  
  printf("Enter %d elements\n",iLength);
  
  for(iCnt = 0;iCnt < iLength;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  SingleNumber(ptr,iLength);
  
  return 0;
}
void SingleNumber(int Arr[],int iSize)
{
  int i = 0;
  int j = 0;
  int iCount = 0;
  
  for(i = 0;i < iSize;i++)
  {
    iCount = 1;
	
	for(j = 0;j < iSize;j++)
	{
	  if(i!=j)
	  {
	    if(Arr[i]==Arr[j])
		{
		  iCount++;
		}
	  }
	}
	if(iCount == 1)
	{
	  printf("%d\t",Arr[i]);
	}
  }
}