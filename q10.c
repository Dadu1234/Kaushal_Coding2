///////////////////////////////////ASSIGNMENT 27//////////////////////////////
//Q.5)Write a program which accept one number from user and on its first 4
//bits. Return modified number.
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int TOGGLE(int);
int main()
{
  int iNo = 0;
  int iRet = 0;
  
  printf("Enter a number\n");
  scanf("%d",&iNo);
  
  iRet = TOGGLE(iNo);
  
  printf("Updated number is %d\n",iRet);
  
  return 0;
}
int TOGGLE(int iValue)
{
 int iCheck = 0;
 int iResult = 0;
 
 iCheck = 0x0000000F;
 
 iResult = iValue | iCheck;
 
 return iResult;
}