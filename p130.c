#include<stdio.h>
char MaxOccurence(char[]);
int main()
{
  char Arr[30];
  char cRet = '\0';
  
  printf("Enter a string\n");
  scanf("%[^'\n']s",Arr);
  
  cRet = MaxOccurence(Arr);
  
  printf("Maximum occuring character is %c\n",cRet);
  
  return 0;
}
char MaxOccurence(char str[30])
{
  int iLength = 0;
  int count[10] = {0};
  int max = 0;
  int i = 0;
  char result = '\0';
  while(str[iLength]!='\0')
  {
    iLength++;
  }
  iLength--;
  
 
  
  
  for(i=0;i<iLength;i++)
  {
    count[str[i]]++;
	if(max<count[str[i]])
	{
	  max = count[str[i]];
	  result = str[i];
	}
  }
  
  return result;
}