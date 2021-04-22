#include<iostream>
#include<climits>

using namespace std;

class PRODUCT{
  int price, qty,total;
public:
  PRODUCT()
  {
    price = 5000;
    qty =45;
  }
  PRODUCT(int x, int y)
  {
    price = x;
    qty = y;
  }
  PRODUCT(PRODUCT &obj)
  {
    price = obj.price;
    qty = obj.qty;
  }
  ~PRODUCT()
  {
    cout<<"koi na apna time ayega"<<endl;
  }
void  input(int x, int y)
  {
    price = x;
    qty = y;
  }
  void process()
  {
    total = price * qty;
  }
  void show()
  {
    cout<<"The total is: "<<total<<endl;
  }

  void party(PRODUCT rmn)
  {
    price = price + rmn.price;
    qty = qty +  rmn.qty;
  }

  PRODUCT party2(PRODUCT rmn)
  {
    PRODUCT pitaji;
    pitaji.price = price + rmn.price;
    pitaji.qty = qty +  rmn.qty;
    return pitaji;
  }
};

int main()
{
  PRODUCT amn;
  amn.input(3,4);
  amn.process();
  amn.show();

  PRODUCT rmn;
  rmn.input(6,7);
  rmn.process();
  rmn.show();

  amn.party(rmn);
  amn.process();
  amn.show();

  PRODUCT *cham;
  PRODUCT object;
  cham = &object;
  *cham = amn.party2(rmn);
  cham->process();
  cham->show();

  *(&object)=amn.party2(rmn);
  (&object)->process();
  (&object)->show();

  PRODUCT time(2,6);
  time.process();
  time.show();

  PRODUCT time2;
  time2.process();
  time2.show();

  PRODUCT time3(time2);
  time3.process();
  time3.show();
}
