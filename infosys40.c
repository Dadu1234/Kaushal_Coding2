#include<stdio.h>
#include<stdlib.h>
int MissingNumber(int[],int);

int main()
{
  int iLength = 0;
  int iCnt = 0;
  int *ptr = NULL;
  int n = 0;
  int iRet = 0;
  printf("Enter terminating value\n");
  scanf("%d",&iLength);
  
  //iLength = n + 1;
  
  ptr = (int *)malloc(iLength*sizeof(int));
  
  printf("Enter %d elements\n",iLength);
  
  for(iCnt = 0;iCnt < iLength;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  iRet = MissingNumber(ptr,iLength);
  
  printf("Missing number is %d\n",iRet);
  
  return 0;
}
int MissingNumber(int Arr[],int iSize)
{
  int i = 0;
  int j = 0;
  int temp = 0;
  
  for(i = 0;i < iSize-1;i++)
  {
   for(j = i+1;j < iSize;j++)
   {
     if(Arr[i]>Arr[j])
	 {
	   temp = Arr[i];
	   Arr[i] = Arr[j];
	   Arr[j] = temp;
	 }
   }
  }
  for(i = 0;i < iSize;i++)
  {
    if((Arr[i+1] - Arr[i])!=1)
	{
	  return(Arr[i]+1);
	}
  }
}
  
      