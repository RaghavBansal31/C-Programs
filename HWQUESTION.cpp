#include<iostream>

using namespace std;

class DATA{
  int radius = 100;
public:
  int show()
  {
    return radius;
  }
};

class CIRCLE{
  DATA object;
  int ar,r;
public:
  void area()
  {
    r = object.show();
    ar = (3.14*r*r);
  }
  void show()
  {
    cout<<"The area of circle is: "<<ar;
  }
};

int main()
{
  CIRCLE mObject;
  mObject.area();
  mObject.show();
}
