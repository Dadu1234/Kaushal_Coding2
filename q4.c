//////////////////////////// ASSIGNMENT 28 ////////////////////////////////
//Q.4) WAP TO CHECK WHETHER 7TH,8TH,9TH BIT IS ON OR OFF //////////////////
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
bool ChkBits(int);

int main()
{
  int iNo = 0;
  bool bRet = false;
  
  printf("Enter a number\n");
  scanf("%d",&iNo);
  
  bRet = ChkBits(iNo);
  
  if(bRet==true)
  {
    printf("Bits are on\n");
  }
  if(bRet==false)
  {
    printf("Either one of the bit or all the bits are off\n");
  }
  
  return 0;
}
bool ChkBits(int iValue)
{
  int iResult = 0;
  int iCheck = 0;
  
  iCheck = 0x000001C0;
  
  iResult = iValue & iCheck;
  
  if(iResult==iCheck)
  {
    return true;
  }
  else
  {
    return false;
  }
}