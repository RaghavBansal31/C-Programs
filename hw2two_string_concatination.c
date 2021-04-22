#include<stdio.h>
#include<stdlib.h>
//2 Question

int main()
{
  char first[20],last[20],concat[20];
  int i,count = 0;

  printf("Enter first name: ");
  scanf("%s",first);

  printf("Enter last name: ");
  scanf("%s",last);


  for(i=0;first[i]!='\0';i++)
  {
    concat[i]=first[i];
    count = count + 1;
  }

  concat[count]=' ';


for(i=0;last[i]!='\0';i++)
{
  concat[count + i + 1] = last[i];
}

printf("The name is %s",concat);

}
