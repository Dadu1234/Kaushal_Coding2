#include<stdio.h>
#include<stdlib.h>
void moveZeroes(int[],int);
int main()
{
  int iLength = 0;
  int iCnt = 0;
  int *ptr = NULL;
  
  printf("Enter length of array\n");
  scanf("%d",&iLength);
  
  ptr = (int *)malloc(iLength*sizeof(int));
  
  printf("Enter %d elements\n",iLength);
  
  for(iCnt = 0;iCnt < iLength;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  moveZeroes(ptr,iLength);
  
  return 0;
}
void moveZeroes(int Arr[],int iSize)
{
  int i = 0;
  int j = 0;
  int temp = 0;
  for(i = 0;i < iSize;i++)
  {
    for(j = i+1;j < iSize;j++)
	{
		if(Arr[i]==0)
		{
			if(Arr[j]!=0)
			{
				temp = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = temp;
			    break;
			}
		}
	}
  }
  
  for(i = 0;i < iSize;i++)
  {
	  printf("%d\t",Arr[i]);
  }
}
    