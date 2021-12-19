#include<stdio.h>
int StrLenCap(char *);
int main()
{
  char Arr[30];
  int iRet = 0;
  
  printf("Enter a string\n");
  scanf("%s",Arr);
  
  iRet = StrLenCap(Arr);
  
  printf("Number of capital letters are %d\n",iRet);
  
  return 0;
}
int StrLenCap(char *str)
{
  int i = 0;
  int iCnt = 0;
  while(*str!='\0')
  {
     if((*str>='A') && (*str<='Z'))
	 {
	   iCnt++;
	 }
	 str++;
  }
  return iCnt;
}