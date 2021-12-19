#include<stdio.h>
#include<stdbool.h>
//bool matrixSearch(int **,int,int,int);
bool matrixSearch(int Brr[10][10],int iRows,int iCols,int iElement)
{
  int k = 0;
  int m = 0;
  
  for(k = 0;k < iRows;k++)
  {
    for(m = 0;m < iCols;m++)
	{
	  if(Brr[k][m] == iElement)
	  {
	   return true;
	  }
	}
  }
  if(k == iRows)
  {
	  return false;
  }
}
  
int main()
{
  int Arr[10][10];
  int i = 0;
  int j = 0;
  bool bRet = false;
  int iValue1 = 0;
  int iValue2 = 0;
  int iData = 0;
  
  printf("Enter number of rows\n");
  scanf("%d",&iValue1);
  
  printf("Enter number of columns\n");
  scanf("%d",&iValue2);
  
  printf("Enter elements for matrix\n");
  
  for(i = 0;i < iValue1;i++)
  {
    for(j = 0;j < iValue2;j++)
	{
	  scanf("%d",&Arr[i][j]);
	}
  }
  printf("Enter element you want to find\n");
  scanf("%d",&iData);
  
  bRet = matrixSearch(Arr,iValue1,iValue2,iData);
  
  if(bRet == true)
  {
    printf("Element found\n");
  }
  else
  {
    printf("Element Not found\n");
  }
  
  return 0;
}
