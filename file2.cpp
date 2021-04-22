#include<iostream>

using namespace std;

int main()
{
   char ch,sourcefile[20],targetfile[20];
   FILE *sf,*tf;

   cout<<"Enter the source file: ";
   cin>>sourcefile;
   sf = fopen(sourcefile,"r");

   cout<<"Enter the target file: ";
   cin>>targetfile;
   tf = fopen(targetfile,"w");

   ch = fgetc(sf);
   while(ch!= EOF)
   {
     fputc(ch,tf);
     ch = fgetc(sf);
   }

}
