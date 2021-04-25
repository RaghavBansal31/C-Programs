#include<iostream>

using namespace std;

class PRODUCT
{
  int qty,price,total;
public:
  void input(int x, int y)
  {
    qty = x;
    price = y;

  }
  void operator ++ ()
  {
    qty++;
    price++;
  }
  void show()
  {
    total = qty * price;
    cout<<"The total is: "<<total<<endl;
  }

};
int main()
{
  PRODUCT amnobj;
  amnobj.input(3,4);
  ++amnobj;
  amnobj.show();


}
