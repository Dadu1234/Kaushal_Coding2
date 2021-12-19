#include<stdio.h>
int main()
{
  int i = 0;
  int j = 0;
  for(i=2;i<100;i++)
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
	  printf("%d\t",i);
	}
  }
}