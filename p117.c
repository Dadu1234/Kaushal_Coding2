#include<stdio.h>
int main()
{
  int Arr[5][4];
  int i = 0;
  int j = 0;
  int iCnt = -1;
  int iCount = -1;
  int k = 0;
  printf("Enter 20 elements\n");
  
  for(i=0;i<5;i++)
  {
    for(j=0;j<4;j++)
	{
	  scanf("%d",&Arr[i][j]);
	}
  }
  
  printf("Entered elements in matrix format:\n");
  for(i=0;i<5;i++)
  {
    for(j=0;j<4;j++)
	{
	  printf("%d\t",Arr[i][j]);
	}
	printf("\n");
  }
  printf("Matrix according to diagonally:\n");
  
  for(i=0;i<5;i++)
  {
	  
	  for(k=i;k>=0;k--)
	  {
		  for(j=0;j<=i;j++)
		  {
			  
		  
		     if((k+j)==i)
		     {
			  printf("%d\t",Arr[k][j]);
		     }
		     if((k+j)!=iCnt)
		     {
			  printf(" ");
		     } 
	      }
	  }
	  printf("\n");
  }
  for(i=4;i>=4;i--)
  {
	  iCount++;
	  for(k=i;k>=2;k--)
	  {
	     for(j=(1+iCount);j<=3;j++)
	     {
		  
		  if((k+j)==(5+iCount))
		  {
			  printf("%d\t",Arr[k][j]);
		  }
		  if((k+j)!=(5+iCount))
		  {
			  printf(" ");
		  }
	     }
	  }
	  printf("\n");
  }
}