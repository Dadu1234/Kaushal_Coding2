#include<stdio.h>
#include<stdbool.h>
void SumAsPrime(int);
bool isPrime(int);
int main()
{
  int iSum = 0;
  
  printf("Enter a sum\n");
  scanf("%d",&iSum);
  
  SumAsPrime(iSum);
  
  return 0;
}
void SumAsPrime(int iValue)
{
  int i = 0;
  int j = 0;
  int Arr[30];
  int l = 0;
  int iCnt = 0;
  bool bRet = false;
  for(i=2;i<=iValue;i++)
  {
    bRet = isPrime(i);
	if(bRet==true)
	{
	  Arr[j] = i;
	  iCnt++;
	  j++;
	}
  }
  
  for(j=0;j<iCnt;j++)
  {
    for(l=j+1;l<iCnt;l++)
	{
	  if(Arr[j]+Arr[l]==iValue)
	  {
	    printf("%d,%d\n",Arr[j],Arr[l]);
      }
	}
  }
}
bool isPrime(int iNo)
{
  int k = 0;
  for(k=2;k<iNo;k++)
  {
    if(iNo%k==0)
	{
	  break;
	}
  }
  if(k==iNo)
  {
    return true;
  }
  if(iNo%k==0)
  {
    return false;
  }
}