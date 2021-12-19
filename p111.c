#include<stdio.h>
#include<stdbool.h>
bool IsDivisibility(int);
int main()
{
  int iNo = 0;
  bool bRet =  false;
  
  printf("Enter a number\n");
  scanf("%d",&iNo);
  
  bRet = IsDivisibility(iNo);
  
  if(bRet==true)
  {
    printf("DIVISIBLE BY 7\n");
  }
  else
  {  
    printf("NOT DIVISIBLE BY 7\n");
  }

  return 0;
}
bool IsDivisibility(int n)
{
  if(n<0)
  {
    return IsDivisibility(-n);
  }
  if((n==0) || (n==7))
  {
    return true;
  }
  if(n<10)
  {
    return false;
  }
  
  return IsDivisibility((n/10)-2*(n - 10*(n/10)));
}