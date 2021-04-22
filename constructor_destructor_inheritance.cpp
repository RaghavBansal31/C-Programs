#include<iostream>

using namespace std;

class sum{
  int a, b,c;
public:

  sum()
  {
    int a = 500;
    int b = 600;
    c = a+b;
    cout<<"The C is: "<<c<<endl;
  }
 sum(int x)
 {
   int a = x;
   cout<<"a is: "<<a<<endl;
 }
 ~sum()
 {
   cout<<"kabi bye"<<endl;
 }

};


class sum2:public sum{
  int a, b,c;
public:

  sum2()
  {
    int a = 60;
    int b = 70;
    c = a+b;
    cout<<"The c is: "<<c<<endl;
  }
  sum2(int x, int y):sum(y)
  {
    int a = x;
    int b = y;
    c = a+b;
    cout<<"The main c is: "<<c<<endl;
  }
  ~sum2()
  {
    cout<<"kabi bye"<<endl;
  }

};

int main()
{
  sum2 amnobj;
  sum2 rmnobj(5,9);




}
