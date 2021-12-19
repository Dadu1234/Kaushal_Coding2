#include<stdio.h>
#include<stdlib.h>
void ProductArray(int[],int);
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
 
 ProductArray(ptr,iLength);
 
 return 0;
}
void ProductArray(int Arr[],int iSize)
{
  int i = 0;
  int iMult = 1;
  int j = 0;
  
  for(i = 0;i < iSize;i++)
  {
    iMult = 1;
    for(j = 0;j < iSize;j++)
	{
	  if(i!=j)
	  {
	    iMult = iMult*Arr[j];
	  }
	}
	printf("%d\t",iMult);
  }
}