#include<stdio.h>
int prime(int);
int fibonacci(int);
int main()
{
  int iIndex = 0;
  int iRet = 0;
  printf("Enter a index no.\n");
  scanf("%d",&iIndex);
  
  if(iIndex%2==0)
  {
    iRet = prime(iIndex/2);
	printf("Number is %d\n",iRet);
  }
  if(iIndex%2==1)
  {
	  iRet = fibonacci((iIndex/2) + 1);
	  printf("Number is %d\n",iRet);
  }
  
  return 0;
}
int prime(int n)
{
  int i = 0;
  int j = 0;
  int iCount = 0;
  for(i=2;i<=18;i++)
  {
    for(j=2;j<i;j++)
	{
	  if(i%j==0)
	  {
	    break;
	  }
	}
	if(j==i)
	{
	  iCount++;
	  if(iCount==n)
	  {
	    return i;
	  }
	}
  }
}
int fibonacci(int iNo)
{
	if((iNo==1) || (iNo==2))
	{
		return 1;
	}
	else
	{
		return(fibonacci(iNo-1) + fibonacci(iNo-2));
	}
}