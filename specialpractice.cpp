#include<iostream>

using namespace std;

class A{
  int p,q,total;
public:
  void input(int x, int y)
  {
    p = x;
    q = y;
  }
  void process()
  {
    total = p*q;

  }
  int result()
  {
    return total;
  }
};

class B{
  int p,q,total;
public:
  void input2(int x, int y)
  {
    p = x;
    q = y;
  }
  void process2()
  {
    total = p*q;

  }
  int result2()
  {
    return total;
  }
};

class C{

  A object;
  B object2;
public:

  int call()
  {
    object.input(2,3);
    object.process();

    object2.input2(3,3);
    object2.process2();

    return (object2.result2() + object.result());


  }
};

int main()
{
  C objectt;
int k =  objectt.call();
cout<<"The total is: "<<k;


}






class PRODUCT{
  int p,q,total;
public:
  void input(int x, int y)
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

  PRODUCT party(PRODUCT object)
  {
    PRODUCT pitaji;
    pitaji.p = p +object.p;
    pitaji.q = q + object.q;
    return pitaji;
  }
};

int main()
{
  PRODUCT object;
  object.input(5,4);

  PRODUCT object2;
  object2.input(7,6);

  PRODUCT pitaji;
  pitaji = object2.party(object);
  pitaji.process();
  int u = pitaji.show();
  cout<<"the total is: "<<u;
}




class PRODUCT{
  int p,q,total;
public:
  void input(int x, int y)
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

  PRODUCT party(PRODUCT object)
  {
    PRODUCT pitaji;
    pitaji.p = p +object.p;
    pitaji.q = q + object.q;
    return pitaji;
  }
};

int main()
{
  PRODUCT * J;
  PRODUCT object;

  J = &object;

  J->input(2,3);
  J->process();
  int u = J->show();
  cout<<"The total: "<<u<<endl;

  (*J).input(2,3);
  (*J).process();
   u = (*J).show();
  cout<<"The total: "<<u<<endl;

  (*(&object)).input(2,3);
  (*(&object)).process();
   u = (*(&object)).show();
  cout<<"The total: "<<u<<endl;

}
