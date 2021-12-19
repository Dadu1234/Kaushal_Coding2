#include<stdio.h>
#include<stdlib.h>
void combinationSum(int[],int,int);
int main()
{
  int *ptr = NULL;
  int iLength = 0;
  int iCnt = 0;
  int iTargeted = 0;
  printf("Enter length of array\n");
  scanf("%d",&iLength);
  
  ptr = (int *)malloc(iLength*sizeof(int));
  
  printf("Enter %d elements\n",iLength);
  
  for(iCnt = 0;iCnt < iLength;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  printf("Enter targeted element\n");
  scanf("%d",&iTargeted);
  
  combinationSum(ptr,iLength,iTargeted);
  
  return 0;
}
void combinationSum(int Arr[],int iSize,int iNumber)
{
  int i = 0;
  int j = 0;
  int k = 0;
  
  for(i = 0;i < iSize;i++)
  {
    if(Arr[i] == iNumber)
	{
	  printf("[%d]\n",Arr[i]);
	  //break;
	}
  }
  
  for(i = 0;i < iSize - 1;i++)
  {
    for(j = i + 1;j < iSize;j++)
	{
	  if(Arr[i] + Arr[j] == iNumber)
	  {
	    printf("[%d,%d]\n",Arr[i],Arr[j]);
		//break;
	  }
	}
  }
  
  for(i = 0;i < iSize - 2;i++)
  {
    for(j = i + 1;j < iSize - 1;j++)
	{
	  for(k = j + 1;k < iSize;k++)
	  {
	    if(Arr[i] + Arr[j] + Arr[k] == iNumber)
		{
		  printf("[%d,%d,%d]\n",Arr[i],Arr[j],Arr[k]);
		 // break;
		}
	  }
	}
  }
}
  