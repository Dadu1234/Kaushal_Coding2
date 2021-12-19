#include<stdio.h>
int CountDigits(char[]);
int main()
{
  char Arr[30];
  int iRet = 0;
  
  printf("Enter a string\n");
  scanf("%s",Arr);
  
  iRet = CountDigits(Arr);
  
  printf("Number of digits is %d\n",iRet);
  
  return 0;
}
int CountDigits(char str[])
{
  int iCount = 0;
  
  while(*str!='\0')
  {
     if((*str>='0') && (*str<='9'))
	 {
	   iCount++;
	 }
	 str++;
  }
  return iCount;
}