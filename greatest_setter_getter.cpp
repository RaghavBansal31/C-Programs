#include<iostream>

using namespace std;

class SI{
  int a,b,c,result;

public:
  void setter(int pr, int ra, int ti)
  {
    a = pr;
    b =ra;
    c =ti;
  }
  void process()
  {
    if(a>b&&a>c)
    result = a;
    else if(b>c)
    result = b;
    else
    result = c;
  }
  int getter()
  {
    return result;
  }
};

int main()
{
  SI obj;
  int pr,ra,ti;
  cout<<"Enter 1st number ";
  cin>>pr;
  cout<<"Enter 2nd number ";
  cin>>ra;
  cout<<"Enter 3rd number ";
  cin>>ti;
  obj.setter(pr,ra,ti);
  obj.process();
  int re = obj.getter();
  cout<<"The result is: "<<re;
}
