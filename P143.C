#include<stdio.h>
#include<stdlib.h>
void SymmetricPair(int[],int);

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
  
  SymmetricPair(ptr,iLength);
  
  return 0;
}
void SymmetricPair(int Arr[],int iSize)
{
 int i = 0;
 int j = 0;
 for(i=0;i<iSize-1;i=i+2)
 {
   for(j=i+1;j<iSize;j=j+2)
   {
     if(Arr[i]==Arr[j])
	 {
	   break;
	 }
   }
   if(Arr[i]==Arr[j])
   {
	   printf("%d %d\n",Arr[i],Arr[i+1]);
   }
 }
}