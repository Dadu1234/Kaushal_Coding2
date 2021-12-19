#include<stdio.h>
#include<stdbool.h>
int ConuntNonRepeated(int,int);
bool ChkRepeat(int);
int main()
{
  int iLower = 0;
  int iUpper = 0;
  int iRet = 0;
  
  printf("Enter lower range\n");
  scanf("%d",&iLower);
  
  printf("Enter upper range\n");
  scanf("%d",&iUpper);
  
  iRet = ConuntNonRepeated(iLower,iUpper);
  
  printf("Count is %d\n",iRet);
  
  return 0;
}
int ConuntNonRepeated(int iNo1,int iNo2)
{
  int iCount = 0;
  int i = 0;
  bool bRet = false;
  for(i=iNo1;i<=iNo2;i++)
  {
    bRet = ChkRepeat(i);
	if(bRet==false)
	{
	  iCount++;
	}
  }
  return iCount;
}
bool ChkRepeat(int iNumber)
{
  int Arr[10];
  int iDigit = 0;
  int iLen = 0;
  int i  = 0;
  int j = 0;
  while(iNumber!=0)
  {
    iDigit = iNumber%10;
	Arr[i] = iDigit;
	i++;
	iLen++;
	iNumber = iNumber/10;
  }
  for(i=0;i<iLen-1;i++)
  {
    for(j=i+1;j<iLen;j++)
	{
	  if(Arr[i]==Arr[j])
	  {
	    return true;
	  }
	  
	}
  }
  if(i==iLen-1)
  {
	  return false;
  }
}