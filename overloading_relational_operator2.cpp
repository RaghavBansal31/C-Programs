#include<iostream>

using namespace std;

class PRODUCT{
  int price,qty,total;
public:
  void input(int x, int y)
  {
    price = x;
    qty = y;
  }
  void result()
  {
    total = price * qty;
    cout<<"The total is: "<<total<<endl;
  }
  int operator == (PRODUCT robj){
    if(total == robj.total)
    return 1;
    else
    return 0;

  }

  int operator < (PRODUCT robj){
    if(total < robj.total )
    return 1;
    else
    return 0;

  }
};

int main()
{
  PRODUCT obj;
  obj.input(9,10);
  obj.result();

  PRODUCT obj2;
  obj2.input(8,1);
  obj2.result();

  if(obj == obj2)
  cout<<"same"<<endl;
  else
  cout<<"not same"<<endl;

  if(obj<obj2)
  cout<<"greater is 2nd"<<endl;
  else
  cout<<"greater is 1st"<<endl;
}
