#include<stdio.h>
#include<stdbool.h>
bool ChkArmstrong(int);
int main()
{
 int iNo = 0;
 bool bRet = false;
 
 printf("Enter a number\n");
 scanf("%d",&iNo);
 
 bRet = ChkArmstrong(iNo);
 
 if(bRet==true)
 {
   printf("Armstrong\n");
 }
 if(bRet==false)
 {
   printf("Not\n");
 }
 
 return 0;
}
bool ChkArmstrong(int iValue)
{
   int iDigit = 0;
   int iMultiply = 1;
   int iSum = 0;
   int iValue1 = 0;
   iValue1= iValue;
   while(iValue!=0)
   {
     iDigit = iValue%10;
	
	 iMultiply = iDigit*iDigit*iDigit;
	 iSum = iSum + iMultiply;
	 iValue = iValue/10;
   }
   if(iSum==iValue1)
   {
     return true;
   }
   else
   {
     return false;
   }
}