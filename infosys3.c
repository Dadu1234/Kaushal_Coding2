#include<stdio.h>
#include<string.h>

int main()
{
  char Arr[30];
  int iLen = 0;
  
  printf("Enter a string\n");
  scanf("%s",Arr);
  
  
  iLen = strlen(Arr);
  
  printf("Length of string is %d\n",iLen);
 
  return 0;
}
  