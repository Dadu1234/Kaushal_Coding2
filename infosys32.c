#include<stdio.h>
#include<stdlib.h>
int majorityElement(int[],int);
int main()
{
  int *ptr = NULL;
  int iLength = 0;
  int iCnt = 0;
  int iRet = 0;
  
  printf("Enter length of array\n");
  scanf("%d",&iLength);
  
  ptr = (int *)malloc(iLength*sizeof(int));
  
  printf("Enter %d elements\n",iLength);
  
  for(iCnt = 0;iCnt < iLength;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  
  iRet = majorityElement(ptr,iLength);
  
  printf("Majority element is %d\n",iRet);
  
  return 0;
  
}
int majorityElement(int Arr[],int iSize)
{
  int i = 0;
  int iCount = 0;
  int iCheck = 0;
  int j = 0;
  iCheck = (iSize/2);
  for(i = 0;i < iSize;i++)
  {
    iCount = 1;
	for(j = 0;j < iSize;j++)
	{
	  if(i!=j)
	  {
	    if(Arr[i]==Arr[j])
		{
		  iCount++;
		}
	  }
	 }
	 if(iCount > iCheck)
	 {
	   return Arr[i];
	   break;
	 }
  }
}