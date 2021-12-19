#include<stdio.h>
#include<stdlib.h>

int main()
{
  int iRows = 0;
  int i = 0;
  int j = 0;
  int Arr[10][10];
  int k = 0;
  printf("Enter size of row\n");
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
	    if((j==0) || (j==iRows -1))
		{
		  Arr[i][j] = 1;
		}
		else
		{
		  if((i > 1) && (i < (iRows - 1)))
          {
            for(j = 1;j < i;j++)
            {
              for(k = 0;k < iRows;k++)
              {
                 Arr[i][j] = Arr[i-1][k] + Arr[i-1][k+1];
               
			  }
			}  
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
  
  return 0;
}
	