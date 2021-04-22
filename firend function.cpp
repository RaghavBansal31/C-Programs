#include<iostream>

using namespace std;
class SALES;
class PURCHASE{
  int price,qty,total;
public:
  void input()
  {
    cout<<"Enter the price of apple purchased: "<<endl;
    cin>>price;
    cout<<"Enter the quantity of apple purchased: "<<endl;
    cin>>qty;

    total = price*qty;

  }
  friend void ProfitLoss(PURCHASE pobj, SALES sobj);
};

class SALES{
  int price, qty,total2;
public:
  void input2()
  {
    cout<<"Enter the price at which apples were sold : "<<endl;
    cin>>price;
    cout<<"Enter the quantity of apple sold : "<<endl;
    cin>>qty;
    total2 = price *qty;
  }
  friend void ProfitLoss(PURCHASE pobj, SALES sobj);
};

void ProfitLoss(PURCHASE pobj, SALES sobj)
{
  int amount = sobj.total2 - pobj.total;

  if(amount>0)
  cout<<"IT IS A PROFIT"<<endl;
  else if(amount<0)
  cout<<"IT IS A LOSS"<<endl;
  else
  cout<<"NO PROFIT NO LOSS"<<endl;

}

int main()
{
  PURCHASE obj1;
  obj1.input();

  SALES obj2;
  obj2.input2();

  ProfitLoss(obj1,obj2);

}
