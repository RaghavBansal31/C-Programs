#include<iostream>

using namespace std;

class PRODUCT{
  int p,q,t;
public:
  void input(int x, int y)
  {
    p =x;
    q =y;
  }
  void process()
  {
    t =p*q;
  }
  int show()
  {
    return t;
  }
  PRODUCT party(PRODUCT bobject)
  {
    PRODUCT pitaji;
    pitaji.p = p +bobject.p;
    pitaji.q = q+bobject.q;
    return pitaji;
  }
};

int main()
{
  PRODUCT aobject;
  aobject.input(2,5);

  PRODUCT bobject;
  bobject.input(6,7);

  PRODUCT cobject;
  cobject = aobject.party(bobject);

  cobject.process();
  int u = cobject.show();
  cout<<"The output is: "<<u;

}
