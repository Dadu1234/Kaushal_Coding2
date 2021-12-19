#include<stdio.h>
#include<stdlib.h>

int main()
{
  int Arr[1][10];
  int i = 0;
  int j = 0;
  int iCols = 0;
  int k = 0;
  printf("Enter number of columns\n");
  scanf("%d",&iCols);
  
  printf("Enter elements of array\n");
  
  for(i = 0;i < 1;i++)
  {
    for(j = 0;j < iCols;j++)
	{
	  scanf("%d",&Arr[i][j]);
	}
  }
  
  for(i = 0;i < 1;i++)
  {
    for(j = 0;j < iCols;j++)
	{
	  for(k = 0;k < iCols;k++)
	  {
	     printf("%d\t",Arr[i][k]);
	  }
	}
  }
  
  return 0;
}
	   