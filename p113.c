#include<stdio.h>
#include<stdlib.h>
void PrintPermutations(int[],int,int);
void PrintArray(int[],int);
void swap(int[],int,int);
int main()
{
  int *ptr = NULL;
  int iLength = 0;
  int iCnt = 0;
  int iIndex = 0;
  printf("Enter length of array\n");
  scanf("%d",&iLength);
  
  ptr = (int *)malloc(iLength*sizeof(int));
  
  printf("Enter %d elements\n",iLength);
  
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  printf("Enter current index of array\n");
  scanf("%d",&iIndex);
  
  PrintPermutations(ptr,iLength,iIndex);
  
  return 0;
}
void PrintPermutations(int Arr[],int iSize,int cid)
{
  int i = 0;
  if(cid==(iSize-1))
  {
    PrintArray(Arr,iSize);
  }
  for(i=cid;i<iSize;i++)
  {
    swap(Arr,cid,i);
	
	printf("\n");
	PrintPermutations(Arr,iSize,cid+1);
	swap(Arr,cid,i);
  }
  
}
void swap(int Brr[],int i,int j)
{
 int temp = 0;
 temp = Brr[i];
 Brr[i] = Brr[j];
 Brr[j] = temp;
}
void PrintArray(int Crr[],int iSize1)
{
  int k = 0;
  int Drr[30];
  int l = 0;
  for(k=0;k<iSize1;k++)
  {
    Drr[k] = Crr[k];
  }
  
    for(k=0;k<(iSize1);k++)
    {
	  printf("%d",Drr[k]);
	  
    }
  
}
  
  