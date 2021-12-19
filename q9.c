/////////////////////////ASSIGNMENT 27 //////////////////////////////////////
//Q.4)Write a program which accept one number from user and toggle 7th and
//10th bit of that number. Return modified number.
/////////////////////////////////////////////////////////////////////////////

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
 
 iCheck = 0x00000240;
 
 iResult = iValue^iCheck;
 
 return iResult;
}