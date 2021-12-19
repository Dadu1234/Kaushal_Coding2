#include<stdio.h>
#include<stdlib.h>
int rand100to200();
int main()
{
  int iNumber = 0;
  iNumber = rand100to200();
  printf("%d",iNumber);
  
  return 0;
}
int rand100to200()
{
  int i = 0;
  int num = 0;
  for(i=100;i<=200;i++)
  {
    
      num = rand()%100 + 100;
	  break;
  }
}