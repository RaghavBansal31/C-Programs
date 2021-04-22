#include<iostream>

using namespace std;

class CIRCLE{
  int r,a;
public:
  void area(int x)
  {
    r = x;
    a = 3.14*r*r;
    cout<<"the area of circle is: "<<a<<endl;
  }
};

class RECTANGLE:public CIRCLE{
  int l,b,a;
public:
  void area(int x, int y)
  {
    l = x;
    b = y;
    a = l*b;
    cout<<"The area of Rectangle is: "<<a<<endl;
  }
};

int main()
{
  RECTANGLE obj;
  obj.area(5,6);
  obj.CIRCLE::area(5);
}
