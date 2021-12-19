#include<stdio.h>

int main()
{
  int Arr[10][10];
  int iRows = 0;
  int i = 0;
  int j = 0;
  int iSum = 0;
  int iMin = 0;
  int k = 0;
  printf("Enter number of rows\n");
  scanf("%d",&iRows);
  
  printf("Enter elements in a matrix\n");
  
  for(i = 0;i < iRows;i++)
  {
    for(j = 0;j < iRows ;j++)
	{
	  scanf("%d",&Arr[i][j]);
	}
	
  }
  
  printf("New matrix is :\n");
  
  for(i = 0;i < iRows;i++)
  {
    for(j = 0;j <= i;j++)
	{
	  printf("%d\t",Arr[i][j]);
	}
	printf("\n");
  }
  
  for(i = 0;i < iRows;i++)
  {
	  iMin = Arr[i][0];
	  for(k = 1;k <= i;k++)
	  {
		  if(Arr[i][k] < iMin)
		  {
			  iMin = Arr[i][k];
		  }
	  }
	  iSum = iSum + iMin;
  }
  printf("Shortest path length is %d\n",iSum);
  return 0;
}