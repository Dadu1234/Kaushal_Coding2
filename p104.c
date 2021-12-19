#include<stdio.h>
int SepecialSeries(int);
int main()
{
  int iRet = 0;
  int iIndex = 0;
  
  printf("Enter a index\n");
  scanf("%d",&iIndex);
  
  iRet = SepecialSeries(iIndex);
  
  printf("Number is %d\n",iRet);
  
  return 0;
}
int SepecialSeries(int iValue)
{
  int i = 0;
  int Arr[50];
  Arr[-2] = 0;
  int j = 0;
  int k = 0;
  
  for(i=0;i<20;i++)
  {
    if(i%2!=0)
	{
	  for(j=2;j<20;j++)
	  {
	    for(k=2;k<j;k++)
		{
		   if(k%j==0)
		   {
		     break;
		   }
		}
		if(k==j)
		{ 
		   Arr[i] = j;
		   if(i==iValue)
		   {
			   return Arr[i];
		   }
		}
      }
	}
	else if(i%2==0)
	{
	  if(i==0)
	  {
	    Arr[i] = 1;
		if(i==iValue)
		{
			return Arr[i];
		}
	  }
	  else
	  {
	    Arr[i] = Arr[i-2] + Arr[i-4];
		if(i==iValue)
		{
			return Arr[i];
		}
	  }
	}
  }
  
}
		 