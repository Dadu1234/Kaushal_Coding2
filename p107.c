#include<stdio.h>
int fibonacci(int);
int main()
{
  int iNo = 0;
  int iRet = 0;
  
  printf("Enter which index number number you want to print\n");
  scanf("%d",&iNo);
  
  iRet = fibonacci(iNo);
  printf("Number at that index is %d\n",iRet);
  return 0;
  
}
int fibonacci(int n)
{
 if((n==1) || (n==2))
 {
   return 1;
 }
 else
 {
   return(fibonacci(n-1)+fibonacci(n-2));
 }
}