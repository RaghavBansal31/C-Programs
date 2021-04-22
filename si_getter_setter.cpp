#include<iostream>

using namespace std;

class SI{
  float p,r,t;
  float result;

public:
  void setter(float pr, float ra, float ti)
  {
    p = pr;
    r =ra;
    t =ti;
  }
  void process()
  {
    result = (p*r*t)/100;
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
  cout<<"Enter principle ";
  cin>>pr;
  cout<<"Enter rate ";
  cin>>ra;
  cout<<"Enter time ";
  cin>>ti;
  obj.setter(pr,ra,ti);
  obj.process();
  obj.getter();
  float re = obj.getter();
  cout<<"The result is:  "<<re;
}
