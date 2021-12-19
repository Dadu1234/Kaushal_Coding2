#include<stdio.h>
void StrCpyX(char[],char[]);
int main()
{
  char Arr[30];
  char Brr[30];
  
  printf("Enter first string\n");
  scanf("%s",Arr);
  
  StrCpyX(Arr,Brr);
  
  printf("String after copy is %s\n",Brr);
  
  return 0;
}
void StrCpyX(char src[],char des[])
{
  int i = 0;
  while(src[i]!='\0')
  {
    des[i] = src[i];
	i++;
  }
  des[i] = '\0';
}