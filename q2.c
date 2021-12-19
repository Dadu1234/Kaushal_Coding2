/////////////////////////// ASSIGNMENT 28 //////////////////////////////
// Q.2)WAP TO CHECK 5TH AND 8TH BIT IS ON OR OFF
////////////////////////////////////////////////////////////////////////

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
    printf("Bits are ON\n");
  }
  if(bRet==false)
  {
    printf("Bits are OFF\n");
  }
  return 0;
}
bool ChkBits(int iValue)
{
  int iResult = 0;
  int iCheck = 0;
  iCheck = 0x00000090;
  
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