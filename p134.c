#include<stdio.h>
int LCM(int,int);
int main()
{
  int iNo1 = 0;
  int iNo2 = 0;
  int iRet = 0;
  
  printf("Enter a first number\n");
  scanf("%d",&iNo1);
  
  printf("Enter second number\n");
  scanf("%d",&iNo2);
  
  iRet = LCM(iNo1,iNo2);
  
  printf("LCM is %d\n",iRet);
  
  return 0;
}
int LCM(int iValue1,int iValue2)
{
  int iMax = 0;
  int i = 0;
  if(iValue1>iValue2)
  {
    iMax = iValue1;
  }
  if(iValue2>iValue1)
  {
    iMax = iValue2;
  }
  for(i=iMax;i<=iValue1*iValue2;i++)
  {  
    if((i%iValue1==0) && (i%iValue2==0))
	{
	  return i;
	  break;
	}
  }
  
}