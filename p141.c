#include<stdio.h>
#include<stdlib.h>
void Duplicate(int[],int);
int main()
{
  int *ptr = NULL;
  int iLength = 0;
  int iCnt = 0;
  
  printf("Enter length of array\n");
  scanf("%d",&iLength);
  
  ptr = (int *)malloc(iLength*sizeof(int));
  
  printf("Enter %d elements\n",iLength);
  
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
	  scanf("%d",&ptr[iCnt]);
  }
  
  Duplicate(ptr,iLength);
  
  return 0;
}
void Duplicate(int Arr[],int iSize)
{
  int i = 0;
  int j = 0;
  
  for(i=0;i<iSize-1;i++)
  {
    for(j=i+1;j<iSize;j++)
	{
	  if(Arr[i]==Arr[j])
	  {
	    printf("%d\t",Arr[i]);
	  }
	}
  }
  
}