/////////////////////////////////////////////////////////////////////////
////////////////////////// ASSIGNMENT 28 ////////////////////////////////
//1)WAP TO CHECK 15TH BIT IS ON OR OFF //////////////////////////////////
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
bool ChkBit(int);
int main()
{
  int iNo = 0;
  bool bRet = false;
  
  printf("Enter a number\n");
  scanf("%d",&iNo);
  
  bRet = ChkBit(iNo);
  
  if(bRet==true)
  {
    printf("15th bit is ON\n");
  }
  if(bRet==false)
  {
    printf("15th bit is off\n");
  }
  return 0;
}
bool ChkBit(int iValue)
{
  int iRet = 0;
  int iCheck = 0;
  iCheck = 0x00004000;
  
  iRet = iCheck & iValue;
  
  if(iRet==iCheck)
  {
    return true;
  }
  else
  {
    return false;
  }
}