#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i = 0;
  int iLength = 0;
  
  int j = 0;
  int k = 0;
  int Arr[14];
  int Brr[14];
  for(i = 2;i<=14;i=i+2)
  {
    for(j=2;j<=14;j++)
	{
	  for(k=2;k<j;k++)
	  {
	    if(j%k==0)
		{
		  break;
		}
	  }  
	  if(k==j)
	  {
	     Arr[i] = j;
	     Brr[i] = Arr[i];
	  }
	}
	break;
	
  }
  
}