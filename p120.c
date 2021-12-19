#include<stdio.h>
int FrequencyChar(char *,char);
int main()
{
  char Arr[30];
  char ch;
  int iRet = 0;
  
  printf("Enter a string\n");
  scanf("%[^'\n']s",Arr);
  
  printf("Enter a character that you want to calculate frequency\n");
  scanf(" %c",&ch);
  
  iRet = FrequencyChar(Arr,ch);
  
  printf("Frequency is %d\n",iRet);
  
  return 0;
}
int FrequencyChar(char *str,char cValue)
{
  int iFreq = 0;
  while(*str!='\0')
  {
    if(*str==cValue)
	{
	  iFreq++;
	}
    str++;
  }
  return iFreq;
}