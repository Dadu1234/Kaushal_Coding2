#include<stdio.h>
int LastOccurence(char *,char);
int main()
{
 char Arr[30];
 char ch;
 int iRet = 0;
 
 printf("Enter a string\n");
 scanf("%[^'\n']s",Arr);
 
 printf("Enter a character\n");
 scanf(" %c",&ch);
 
 iRet = LastOccurence(Arr,ch);
 
 printf("Last occurence is %d\n",iRet);
 
 return 0;
}
int LastOccurence(char str[],char cValue)
{
  int i= 0;
  int iPos = -1;
  
  while(str[i]!='\0')
  {
    if(str[i]==cValue)
	{
	  iPos = i;
	}
	i++;
  }
  return iPos;
}