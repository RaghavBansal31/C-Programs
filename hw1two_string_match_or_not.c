#include<stdio.h>
#include<stdlib.h>
//1 Question

int main()
{
  char password[20], password2[20];
  int i,count=0;

  printf("Enter password");
  scanf("%s",password);

  printf("Enter repeat password");
  scanf("%s",password2);

for(i=0;password[i]!='\0';i++)
{
  if(password[i] == password2[i])
  count =count+1;

}
if(count == i)
printf("password match");
else
printf("password dont match");
}
