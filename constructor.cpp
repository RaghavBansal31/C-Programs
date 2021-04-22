#include<iostream>

using namespace std;

class PRODUCT{
  int p,q,total;
public:
  PRODUCT(int x, int y) // constructor
  {
    p = x;
    q = y;
  }
  void process()
  {
    total = p*q;
  }
  int show()
  {
    return total;
  }

  PRODUCT()  // constructor
  {
    p = 500;
    q = 600;
  }

  PRODUCT(PRODUCT &robj) // constructor
  {
    p = robj.p;
    q = robj.q;
  }
  ~PRODUCT() // destructor
  {
    cout<<"kabhi alvida na kehna"<<endl;
  }

};

int main()
{
  PRODUCT aobj;
  aobj.process();
  int u = aobj.show();
  cout<<"the total is: "<<u<<endl;

  PRODUCT robj;
  robj.process();
  u = robj.show();
  cout<<"the total is: "<<u<<endl;

  PRODUCT cobj(robj);
  cobj.process();
  u = cobj.show();
  cout<<"the total is: "<<u<<endl;




}
