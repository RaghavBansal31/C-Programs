#include<stdio.h>
#include<stdlib.h>

//3 Question

int main()
 {
  char straight[30] ,reverse[30];
  int i,j,count;

  printf("Enter first name: ");
  scanf("%s",straight);

  for(i=0;straight[i]!='\0';i++)
  {
    count = count + 1;
  }

 for(i=0;straight[i]!='\0';i++)
 {
   reverse[count-1]=straight[i];
   count--;
 }

 printf("The reversed string of string %s is: %s\n",straight,reverse);

 printf("\n");

 for(i=0;straight[i]!='\0';i++)
 {
   if(straight[i] == reverse[i])
   count =count+1;

 }
 if(count == i)
 printf("pallindrome");
 else
 printf("not a pallindrome");
 }
