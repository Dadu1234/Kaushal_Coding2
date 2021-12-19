///////////////////////////////////ASSIGNMENT 28///////////////////////////
// Q.5) WAP TO CHECK WHETHER 1ST AND LAST BIT IS ON OR OFF.
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
    printf("Bits are off\n");
  }
  
  return 0;
}
bool ChkBits(int iValue)
{
  int iResult = 0;
  int iCheck = 0;
  
  iCheck = 0x80000001;
  
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