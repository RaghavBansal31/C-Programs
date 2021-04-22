#include<iostream>

using namespace std;

class HEIGHT
{
  float height, height2;
public:
  void input(float h)
  {
    height = h;
  }
  void input2(float h2)
  {
    height2 = h2;
  }
  void show()
  {
    cout<<"Height Difference is: "<<height<<endl;
  }
  void difference(HEIGHT robj)
  {
    height = height - robj.height2;
  }

  void show2()
  {
    cout<<"Height Difference is: "<<height2<<endl;
  }
  void difference2(HEIGHT aobj)
  {
    height2 = height2 - aobj.height;
  }
};

int main()
{
  HEIGHT amnobj;
  amnobj.input(4.5);

  HEIGHT rmnobj;
  rmnobj.input2(6.4);

  amnobj.difference(rmnobj);
  amnobj.show();

  rmnobj.difference2(amnobj);
  rmnobj.show2();




}
