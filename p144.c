#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool ChkPossible(int[],int);
int main()
{
 int *ptr = NULL;
 int iLength = 0;
 int iCnt = 0;
 bool bRet = false;
 
 printf("Enter length of array\n");
 scanf("%d",&iLength);
 
 ptr = (int *)malloc(iLength*sizeof(int));
 
 printf("Enter %d elements\n",iLength);
 for(iCnt=0;iCnt<iLength;iCnt++)
 {
	 scanf("%d",&ptr[iCnt]);
 }
 bRet = ChkPossible(ptr,iLength);
 
 if(bRet==true)
 {
   printf("Possible\n");
 }
 if(bRet==false)
 {
   printf("Not possible\n");
 }
 return 0;
}
bool ChkPossible(int Arr[],int iSize)
{
 int iMax = 0;
 int i = 0;
 int iLcm = 0;
 int LCM = 0;
 int iCheck = 0;
 int iMultiply = 1;
 iMax = Arr[0];
 for(i=0;i<iSize;i++)
 {
   if(iMax<Arr[i])
   {
     iMax = Arr[i];
   }
 }
 for(i=0;i<iSize;i++)
 {
   iMultiply = iMultiply*Arr[i];
 }
  for(iLcm=iMax;iLcm<=iMultiply;iLcm++)
  {
    for(i=0;i<iSize;i++)
	{
      if(iLcm%Arr[i]!=0)
      {
	    break;
		
	  }
	}
	if(i==iSize)
	{
	  LCM = iLcm;
	  break;
	}
  }
  
  for(i=0;i<iSize;i++)
  {
    iCheck = LCM/Arr[i];
	if((iCheck%2!=0) && (iCheck%3!=0))
	{
	  break;
	}
  }
  if(i==iSize)
  {
    return true;
  }
  if((iCheck%2!=0) && (iCheck%3!=0))
  {
    return false;
  }
}