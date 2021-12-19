#include<stdio.h>
#include<stdlib.h>
int LongestSequence(int[],int);
int main()
{
  int iLength = 0;
  int iCnt = 0;
  int *ptr = NULL;
  int iRet = 0;
  
  printf("Enter length of array\n");
  scanf("%d",&iLength);
  
  ptr = (int *)malloc(iLength*sizeof(int));
  
  printf("Enter %d elements\n",iLength);
  
  for(iCnt = 0;iCnt < iLength;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  iRet = LongestSequence(ptr,iLength);
  
  printf("Length is %d\n",iRet);
  
  return 0;
}
int LongestSequence(int Arr[],int iSize)
{
  int i = 0;
  int iCount = 0;
  int iMin = 0;
  int iMax = 0;
  int j = 0;
  int k = 0;
  int Brr[50];
  for(i = 0;i < iSize;i++)
  {
	iMin = Arr[i];
	for(j = 0;j < iSize;j++)
	{
		