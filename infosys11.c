#include<stdio.h>
#include<stdlib.h>
int FindIndex(int[],int,int);
int main()
{
  int *ptr = NULL;
  int iCnt = 0;
  int iLength = 0;
  int iTargeted = 0;
  int iRet = 0;
  
  printf("Enter length of array\n");
  scanf("%d",&iLength);
  
  ptr = (int *)malloc(iLength*sizeof(int));
  
  printf("Enter %d elements\n",iLength);
  
  for(iCnt = 0;iCnt < iLength;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  printf("Enter targeted element\n");
  scanf("%d",&iTargeted);
  
  iRet = FindIndex(ptr,iLength,iTargeted);
  
  printf("Index is %d\n",iRet);
  
  return 0;
}
int FindIndex(int Arr[],int iSize,int iValue)
{
  int i = 0;
  
  for(i = 0;i < iSize;i++)
  {
    if(Arr[i] == iValue)
	{
	  return i;
	}
  }
  if(i==iSize)
  {
    for(i = iSize -1;i >= 0;i--)
	{
	  if(iValue > Arr[i])
	  {
	    return i + 1;
	  }
	}
  }
}