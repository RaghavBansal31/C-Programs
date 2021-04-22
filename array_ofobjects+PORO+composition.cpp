#include<iostream>

using namespace std;

class sum{
  int a,b;
public:

  void input(int x, int y)
  {
    a=x;
    b=y;
  }

  void show()
  {

    cout<<"the sum is: "<<a+b<<endl;
  }
void party(sum rmnobj)
{
  a = a+rmnobj.a;
  b = b+rmnobj.b;
}

sum party2(sum rmnobj)
{
  sum bhaji;
  bhaji.a = a +rmnobj.a;
  bhaji.b = b +rmnobj.b;
  return bhaji;
}
};

class second{
  int c,d;
public:
  void input2(int x, int y)
  {
    c =x;
    d =y;
  }
  void show2()
  {
    cout<<"The second sum is: "<<c+d<<endl;
  }
};

class m{
  sum amnobj[4];
  sum rmnobj[4];
  sum chmnobj[4];
  second obj1[4];
public:
  void callall()
  {
    int a[5],b[5],c[5],d[5];
    for(int i = 0;i<5;i++)
    {
      cout<<"Enter a and b and c and d: ";
      cin>>a[i]>>b[i]>>c[i]>>d[i];
    }

    for(int i=0;i<4;i++)
    {
      amnobj[i].input(a[i],b[i]);
      amnobj[i].show();

      rmnobj[i].input(a[i],b[i]);
      rmnobj[i].show();

      amnobj[i].party(rmnobj[i]);
      amnobj[i].show();

      chmnobj[i] = amnobj[i].party2(rmnobj[i]);
      chmnobj[i].show();

      obj1[i].input2(c[i],d[i]);
      obj1[i].show2();
    }
  }
};
int main()
{
  m obj2;
  obj2.callall();
}
