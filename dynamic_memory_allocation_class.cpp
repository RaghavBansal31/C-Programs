#include<iostream>

using namespace std;

class PRODUCT{
  int price,qty,total;
public:
  void input()
  {
    price =90;
    qty = 100;
  }
  void result()
  {
    total =price * qty;
    cout<<"The total is: "<<total<<endl;
  }

};

int main()
{
  PRODUCT *p = new PRODUCT();
  p->input();
  p->result();

  delete p;
}
