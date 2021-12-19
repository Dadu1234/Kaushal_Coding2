#include<stdio.h>
#include<stdlib.h>

int main()
{
  int iRows = 0;
  int Arr[10][10];
  int i = 0;
  int j = 0;
  
  printf("Enter number of rows\n");
  scanf("%d",&iRows);
  
  for(i = 0;i < iRows;i++)
  {
    for(j = 0;j < iRows;j++)
	{
	  if(i == 0)
	  {
	    if(j == 0)
		{
		  Arr[i][j] = 1;
	    }
		else
		{
		  Arr[i][j] = 0;
		}
	  
	  }
	  else
	  {
	     if((j == 0) || (j == iRows - 1))
		 {
		   Arr[i][j] = 1;
		 }
		 else
		 {
		   if(i > 1)
		   {
			   for(k = 0;k < iRows;k++)
			   {
				   iSum = iSum + Arr[i-1][k];
			   }
			   Arr[i][j+1] = 
		   }
		   else
		   {
			   Arr[i][j] = 0;
		   }
		 }
	  
	  }
	}
  }
  
  for(i = 0;i < iRows;i++)
  {
    for(j = 0;j < iRows;j++)
	{
	  printf("%d\t",Arr[i][j]);
	}
	printf("\n");
  }
}