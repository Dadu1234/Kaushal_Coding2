#include<stdio.h>
void Swap(char[],char[]);
int main()
{
  char str1[30];
  char str2[30];
  
  printf("Enter first string\n");
  scanf("%s",str1);
  
  printf("Enter second string\n");
  scanf("%s",str2);
  
  Swap(str1,str2);
  
  return 0;
}
void Swap(char *Arr,char *Brr)
{
   char temp[30];
   *temp = Arr;
   Arr = Brr;
   Brr = temp;
   
   printf("Strings after swapping are:\n");
   
   printf("%s\n",Arr);
   printf("%s\n",Brr);
}