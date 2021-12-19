#include<stdio.h>
#include<stdbool.h>
bool ChkPallindrome(char[]);
int main()
{
  char Arr[30];
  bool bRet = false;
  
  printf("Enter a string\n");
  scanf("%s",Arr);
  
  bRet = ChkPallindrome(Arr);
  if(bRet==true)
  { 
    printf("String is pallindrome\n");
  }
  else
  {
    printf("String is not pallindrome\n"); 
  }
  
  return 0;
}
bool ChkPallindrome(char str[30])
{ 
  int i = 0;
  int iStart = 0;
  int iEnd = 0;
  char copy[30];
  char temp = '\0';
  while(str[iEnd]!='\0')
  {
	 copy[iEnd] = str[iEnd]; 
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
  
  for(i=0;str[i]!='\0';i++)
  {
	  if(str[i]!=copy[i])
	  {
		  break;
	  }
  }
  if(str[i]=='\0')
  {
	  return true;
  }
  if(str[i]!=copy[i])
  {
	   return false;
  }
}