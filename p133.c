#include<stdio.h>
int power(int,int);
int main()
{
  int iNo = 0;
  int iExp = 0;
  int iRet = 0;
  
  printf("Enter a number\n");
  scanf("%d",&iNo);
  
  printf("Enter exponential part\n");
  scanf("%d",&iExp);
  
  iRet = power(iNo,iExp);
  
  printf("Power is %d\n",iRet);
  
  return 0;
}
int power(int iNumber,int iEx)
{
  int iMultiply = 1;
  int i = 1;
  for(i=1;i<=iEx;i++)
  {
     iMultiply = iMultiply*iNumber;
  }
  
  return iMultiply;
}