#include<stdio.h>
#include<stdlib.h>
void Reverse(int[],int);
int main()
{
  int *ptr = NULL;
  int iNo = 0;
  int iCnt = 0;
  
  printf("Enter a number\n");
  scanf("%d",&iNo);
  
  ptr = (int *)malloc(iNo*sizeof(int));
  
  printf("Enter %d elements\n",iNo);
  
  for(iCnt=0;iCnt<iNo;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  Reverse(ptr,iNo);
  
  return 0;
}
void Reverse(int Arr[],int iSize)
{
  int temp = 0;
  int i = 0;
  for(i=0;i<=iSize/2;i++)
  {
    temp = Arr[i];
	Arr[i] = Arr[iSize-1-i];
	Arr[iSize-1-i] = temp;
  }
  for(i=0;i<iSize;i++)
  {
    printf("%d\t",Arr[i]);
  }
}
 