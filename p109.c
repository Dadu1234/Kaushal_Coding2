#include<stdio.h>
#include<stdbool.h>
int CountNotContainsThree(int);
bool ChkContainThree(int);
int main()
{
  int iNumber = 0;
  int iRet = 0;
  
  printf("Enter a number\n");
  scanf("%d",&iNumber);
  
  iRet = CountNotContainsThree(iNumber);
  
  printf("Count is %d\n",iRet);
  
  return 0;
}
int CountNotContainsThree(int n)
{
  int i = 0;
  int iCount = 0;
  int iRes = 0;
  bool bRet = false;
  for(i=1;i<=n;i++)
  {
    bRet = ChkContainThree(i);
	if(bRet==true)
	{
	  iCount++;
	}
  }
  iRes = n - iCount;
  return iRes;
}
bool ChkContainThree(int iNo)
{
  int iDigit = 0;
  while(iNo!=0)
  {
    iDigit = iNo%10;
	if(iDigit==3)
	{
	  return true; 
	  break;
	}
	iNo = iNo/10;
  }
}