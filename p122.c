#include<stdio.h>
void StrRevX(char[]);
int main()
{
  char Arr[30];
  
  printf("Enter a string\n");
  scanf("%s",Arr);
  
  StrRevX(Arr);
  
  printf("Reverse string is %s\n",Arr);
  return 0;
}
void StrRevX(char str[])
{
  int i = 0;
  char temp;
  int iStart = 0;
  int iEnd = 0;
  
  while(str[iEnd]!='\0')
  {
     iEnd++;
  }
  iEnd--;
  
  while(iStart<iEnd)
  {
    temp = str[iStart];
	str[iStart] = str[iEnd];
	str[iEnd] = temp;
	
	iStart++;
	iEnd--;
  }
 
}