#include<iostream>

using namespace std;

class SI{
  int a,b,c,d,result;

public:
  void setter(int m, int s, int e,int ma)
  {
    a = m;
    b = s;
    c = e;
    d = ma;
  }
  void process()
  {
    result = (a+b+c+d);
  }
  int getter()
  {
    return result;
  }
};

int main()
{
  SI obj;
  int m,s,e,ma;
  cout<<"Enter percent in Mathematics ";
  cin>>m;
  cout<<"Enter percent in Science ";
  cin>>s;
  cout<<"Enter percent in English ";
  cin>>e;
  cout<<"Enter percent in Management ";
  cin>>ma;
  obj.setter(m,s,e,ma);
  obj.process();
  int percentage = obj.getter();
  cout<<percentage<<"\n";
  float r = (percentage*100) /400;

  cout<<"The result is: "<<r;
}
