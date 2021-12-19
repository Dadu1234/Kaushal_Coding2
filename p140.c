#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int LongestPallindrome(int[],int);
bool ChkPallindrome(int);

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
  
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
     scanf("%d",&ptr[iCnt]);
  }
  
  iRet = LongestPallindrome(ptr,iLength);
  
  printf("Longest pallindrome is %d\n",iRet);
  
  return 0;
}
int LongestPallindrome(int Arr[],int iSize)
{
  int i = 0;
  int j = 0;
  int temp = 0;
  bool bRet = false;
  for(i=0;i<iSize-1;i++)
  {
    for(j=i+1;j<iSize;j++)
	{
	  if(Arr[i]<Arr[j])
	  {
	    temp = Arr[i];
		Arr[i] = Arr[j];
		Arr[j] = temp;
	  }
	}
  }
  for(i=0;i<iSize;i++)
  {
     bRet = ChkPallindrome(Arr[i]);
	 if(bRet==true)
	 {
	   return Arr[i];
	   break;
	 }
  }
}
bool ChkPallindrome(int iNumber)
{
  int iDigit = 0;
  int iValue = 0;
  int iReverse = 0;
  iValue = iNumber;
  while(iNumber!=0)
  {
    iDigit = iNumber%10;
	iReverse = iReverse*10 + iDigit;
	iNumber = iNumber/10;
  }
  if(iReverse==iValue)
  {
    return true;
  }
  else
  {
    return false;
  }
}
