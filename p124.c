#include<stdio.h>
void StrConCat(char[],char[]);
int main()
{
  char Arr[30];
  char Brr[30];
  
  printf("Enter first string\n");
  scanf("%[^'\n']s",Arr);
  
  printf("Enter second string\n");
  scanf("% [^'\n']s",Brr);
  
  StrConCat(Arr,Brr);
  
  printf("String after concatenation is %s\n",Brr);
  
  return 0;
}
void StrConCat(char *src,char *des)
{
  int i = 0;
  while(*des!='\0')
  {
    des++;
  }
  
  while(*src!='\0')
  {
    *des = *src;
	des++;
	src++;
  }
  *des = '\0';
}