#include<stdio.h>
#include<stdlib.h>
void merge(int[],int);
int main()
{
  int *ptr = NULL;
  int iLength = 0;
  int iCnt = 0;
  
  printf("Enter length of array\n");
  scanf("%d",&iLength);
  
  ptr = (int *)malloc(iLength*sizeof(int));
  
  printf("Enter %d elements\n",iLength);
  
  for(iCnt = 0;iCnt < iLength;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  merge(ptr,iLength);
  
  return 0;
  
}
void merge(int Arr[],int iSize)
{
  int i = 0;
  int j = 0;
  int k = 0;
  int iIndex1 = 0;
  int iIndex2 = 0;
 
  for(i = 0;i < iSize;i++)
  {
   if(Arr[i] == Arr[i+1])
   {
     
	 iIndex1 = i;
	 iIndex2 = i + 1;
	 break;
   } 
  }
  for(k = 0;k < iSize;k++)
  {
	  if((k != iIndex1) && (k != iIndex2))
	  {
		  printf("%d\t",Arr[k]);
	  }
  }
  
}