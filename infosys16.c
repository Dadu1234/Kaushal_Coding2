#include<stdio.h>
#include<stdlib.h>

int main()
{
  int Arr[3][3];
  int i = 0;
  int iLength = 0;
  int j = 0;
  int iIndex1 = 0;
  int iIndex2 = 0;
  printf("Enter elements for matrix\n");
  
  for(i = 0;i <= 2;i++)
  {
    for(j = 0;j <= 2;j++)
	{
	  scanf("%d",&Arr[i][j]);
	}
  }
  
  for(i = 0;i <= 2;i++)
  { 
    for(j = 0;j <= 2;j++)
	{
	  if(Arr[i][j] == 0)
	  {
	    iIndex1 = i;
		iIndex2 = j;
	  }
	}
  }
  
  for(i = 0;i <= 2;i++)
  {
    if(i == iIndex1)
	{
      for(j = 0;j <=2;j++)
	  {
	    Arr[i][j] = 0;
	  }
	}
  }
  for(j = 0;j <=2;j++)
  {
    if(j == iIndex2)
	{
	  for(i = 0;i <= 2;i++)
	  {
	    Arr[i][j] = 0;
	  }
	}
  }
  printf("New updated array is :\n");
  
  for(i = 0;i <= 2;i++)
  {
    for(j = 0;j <= 2;j++)
	{
	  printf("%d\t",Arr[i][j]);
	}
	printf("\n");
  }
 
  return 0;
}
	  
	  
	    
  