#include<iostream>

using namespace std;

class C
{
  int a,b;
public:
  void input(int x, int y)
  {
    a = x;
    b = y;
  }

  void show()
  {
    cout<<a<<" + "<<"i"<<b<<endl;
  }

  C operator + (C robj)
  {
    C bhaji;
    bhaji.a = a + robj.a;
    bhaji.b = b + robj.b;

    return bhaji;
  }
};
int main()
{
  C amnobj;
  amnobj.input(3,4);
  amnobj.show();

  C rmnobj;
  rmnobj.input(1,3);
  rmnobj.show();

  C chamn = amnobj + rmnobj;
  chamn.show();


}
