#include<stdio.h>
int SumRange(int,int);
int main()
{
  int iNo1 = 0;
  int iNo2 = 0;
  int iRet = 0;
  
  printf("Enter a 1st number\n");
  scanf("%d",&iNo1);
  
  printf("Enter second number\n");
  scanf("%d",&iNo2);
  
  iRet = SumRange(iNo1,iNo2);
  
  printf("Sum is %d\n",iRet);
  
  return 0;
}
int SumRange(int iValue1,int iValue2)
{
  int iSum = 0;
  int i = 0;
  for(i=iValue1;i<=iValue2;i++)
  {
    iSum = iSum + i;
  }
  return iSum;
}