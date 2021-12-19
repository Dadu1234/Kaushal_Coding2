#include<stdio.h>
int main()
{
  int Arr[4][4];
  int i = 0;
  int j = 0;
  
  printf("Enter 16 elements for matrix\n");
  
  for(i=0;i<=3;i++)
  {
    for(j=0;j<=3;j++)
	{
	  scanf("%d",&Arr[i][j]);
	}
  }
  
  printf("Entered elements in matrix format is\n");
  
  for(i=0;i<=3;i++)
  {
    for(j=0;j<=3;j++)
	{
	  printf("%d\t",Arr[i][j]);
	}
	printf("\n");
  }
  
  printf("Matrix in spiral form\n");
  
  for(i=0;i<=3;i++)
  {
	  if(i==0)
	  {
		 for(j=0;j<=3;j++)
		 {
			 printf("%d\t",Arr[i][j]);
		 }
	  }
	  else if(i==3)
	  {
		  for(j=3;j>=0;j--)
		  {
			  printf("%d\t",Arr[i][j]);
		  }
	  }
	  else
	  {
		  printf("%d\t",Arr[i][3]);
	  }
  }
  for(j=0;j<=2;j++)
  {
	  if(
}
  