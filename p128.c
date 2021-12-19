#include<stdio.h>
void Swap(char[],char[]);
int main()
{
  char Arr[30];
  char Brr[30];
  
  printf("Enter first string\n");
  scanf("%s",Arr);
  
  printf("Enter second string\n");
  scanf("%s",Brr);
  
  Swap(Arr,Brr);
  
  printf("String after swapping:\n");
  printf("%s\n",Arr);
  printf("%s\n",Brr);
  
  return 0;
}
void Swap(char *str1,char *str2)
{
  char temp[30];
  while(*str2!='\0')
  {
    *temp = *str1;
    *str1 = *str2;
    *str2 = *temp;
	
	str1++;
	str2++;
  }
}