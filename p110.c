
#include<stdio.h>
#include<stdbool.h>
int NearestPallindrome(int);
bool ChkPallindrome(int);
int main()
{
 int iNo = 0;
 int iRet = 0;
 
 printf("Enter a number\n");
 scanf("%d",&iNo);
 
 iRet = NearestPallindrome(iNo);
 
 printf("Nearest pallindrome is %d\n",iRet);
 
 return  0;
}
int NearestPallindrome(int iNo1)
{
  bool bRet = false;
  while(bRet!=true)
  { 
    bRet = ChkPallindrome(iNo1);
	if(bRet==true)
	{
	  return iNo1;
	 
	}
	else
	{
	  iNo1 = iNo1 + 1;
	}
  }
}
bool ChkPallindrome(int n)
{
  int iDigit = 0;
  int iReverse = 0;
  while(n!=0)
  {
    iDigit = n%10;
	iReverse = iDigit+iReverse*10;
    n = n/10;
  }
  if(iReverse==n)
  {
    return true;
  }
  else
  {
    return false;
  }
}