#include<iostream>

using namespace std;

class PRODUCT{
  int price, qty,total;
public:
  void calculate(int x, int y)
  {
    price = x;
    qty = y;
    total = price * qty;
    cout<<"The total is: "<<total<<endl;
  }
};

class PRODUCT2{
  int price, qty,total;
public:
  void calculate(int x, int y)
  {
    price = x;
    qty = y;
    total = price * qty;
    cout<<"The total is: "<<total<<endl;
  }
};

class MAIN:public PRODUCT,public PRODUCT2{

};

int main()
{
  MAIN obj;
  obj.PRODUCT::calculate(4,5);
  obj.PRODUCT2::calculate(6,7);


}
