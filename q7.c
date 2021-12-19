////////////////////////////////ASSIGNMENT 27///////////////////////////////////
//Q.2)Write a program which accept one number from user and off 7th and 10th
//bit of that number. Return modified
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int OffBit(int);
int main()
{
  int iNo = 0;
  int iRet = 0;
  
  printf("Enter a number\n");
  scanf("%d",&iNo);
  
  iRet = OffBit(iNo);
  
  printf("Modified number is %d\n",iRet);
  
  return 0;
}
int OffBit(int iValue)
{
  int iCheck = 0;
  int iResult = 0;
  
  iCheck = 0x00000240;
  
  iResult = iValue^iCheck;
  
  return iResult;
}