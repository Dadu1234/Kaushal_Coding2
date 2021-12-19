////////////////////////////////ASSIGNMENT 28//////////////////////////////////
//Q.3) WAP TO CHECK WHETHER 7,15,21,28 BITS ARE ON ////////////////////////////
///////////////////////////////////////////////////////////////////////////////

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
    printf("All Bits or one of the bit are Off\n");
  
  }
  return 0;
}
bool ChkBits(int iValue)
{
  int iResult = 0;
  int iCheck = 0;
  
  iCheck = 0x08104040;
  
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