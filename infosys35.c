#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CountPrime(int);
bool CheckPrime(int);

int main()
{
  int iNumber = 0;
  int iRet = 0;
  
  printf("Enter a number\n");
  scanf("%d",&iNumber);
  
  iRet = CountPrime(iNumber);
  
  printf("Number of prime is %d\n",iRet);
  
  return 0;
}
int CountPrime(int iValue)
{
  int i = 0;
  int iCount = 0;
  bool bRet = false;
  for(i = 2;i < iValue;i++)
  {
    bRet = CheckPrime(i);
	if(bRet == true)
	{
	  iCount++;
	}
  }
  return iCount;
}
bool CheckPrime(int iNo)
{
  int k = 0;
  for(k = 2;k < iNo;k++)
  {
    if(iNo%k==0)
	{
	  break;
	}
  }
  if(k == iNo)
  {
   return true;
  }
  else
  {
    return false;
  }
}
  