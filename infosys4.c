#include<stdio.h>
#include<string.h>
int FirstIndex(char[],int);
int main()
{
  char Arr[30];
  int iRet = 0;
  int iLen = 0;
  
  printf("Enter a string\n");
  scanf("%s",Arr);
  
  iLen = strlen(Arr);
  
  iRet = FirstIndex(Arr,iLen);
  
  printf("Minimum index is %d\n",iRet);
 
  return 0;
}
int FirstIndex(char str[],int iSize)
{
  int i = 0;
  int j = 0;
  for(i = 0;i < iSize;i++)
  {
    for(j = i + 1;j < iSize;j++)
	{
	  if(str[i] == str[j])
	  {
	    break;
	  }
	}
	if(j == iSize)
	{
	  return i + 1;
	  break;
	}
  }
}
  
  