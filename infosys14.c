#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool canJump(int[],int);
int main()
{
  int *ptr = NULL;
  int iLength = 0;
  int iCnt = 0;
  
  bool bRet = false;
  
  printf("Enter length of array\n");
  scanf("%d",&iLength);
  
  ptr = (int *)malloc(iLength*sizeof(int));
  
  printf("Enter %d elements\n",iLength);
  
  for(iCnt = 0;iCnt < iLength;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  bRet = canJump(ptr,iLength);
  
  if(bRet == true)
  {
    printf("Yes can jump\n");
  }
  else
  {
    printf("Cannot jump\n");
  }
  
  return 0;
}
bool canJump(int Arr[],int iSize)
{
  
  if(Arr[1] == (iSize - 1))
  {
    return true;
  }
  else
  {
	  return false;
  }
}