#include<iostream>

using namespace std;


class PRODUCT{
  int price, qty,total;
public:
  void input(int x, int y)
  {
    price = x;
    qty = y;
  }
  void total1()
  {
     total = price * qty;
    cout<<"The total is: "<<total<<endl;
  }
  void operator ++ ()
  {
    price++;
    qty++;
  }

};
class second:virtual public PRODUCT{

};

class m:public virtual PRODUCT{

};

class s:public second,public m{

};

int main()
{
  m obj;
  obj.input(5,6);
  ++obj;
  obj.total1();

  second obj1;
  obj1.input(5,6);
  ++obj1;
  obj1.total1();

  s obj2;
  obj2.input(5,6);
  ++obj2;
  obj2.total1();


}
