#include<stdio.h>
#include<stdlib.h>

int main()
{
  int Arr[3][3];
  int i = 0;
  int j = 0;
  
  printf("Enter 9 elements for matrix\n");
  
  for(i = 0;i <= 2;i++)
  {
    for(j = 0;j <= 2;j++)
	{ 
	  scanf("%d",&Arr[i][j]);
	}
	
  }
  
  printf("Rotated array is :\n");
  
  for(i = 0;i <= 2;i++)
  {
	  for(j = 2;j >= 0;j--)
	  {
		  printf("%d\t",Arr[j][i]);
	  }
	  printf("\n");
  }
  
  
  
  return 0;
}