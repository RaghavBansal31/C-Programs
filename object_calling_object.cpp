#include<iostream>

using namespace std;

class RECTANGLE{
  int l,b,Area,perimeter;
public:
  void InputRec()
  {
    cout<<"Enter Length & Breadth: ";
    cin>>l>>b;

  }
  void processRec()
  {
    Area = l*b;
    perimeter = 2*(l+b);
  }
  void show()
  {
    cout<<"The Area of Rectangle is: "<<Area<<endl;
    cout<<"The Periemter of Rectangle is: "<<perimeter<<endl;
  }
};
class SQUARE{
  int l,b,Area,perimeter;
public:
  void InputSqu()
  {
    cout<<"Enter Length: ";
    cin>>l;

  }
  void processSqu()
  {
    Area = l*l;
    perimeter = 4*l;
  }
  void showSqu()
  {
    cout<<"The Area of Square is: "<<Area<<endl;
    cout<<"The Periemter of Square is: "<<perimeter<<endl;
  }
};

class MIX
{
  RECTANGLE obj1;
  SQUARE obj2;

public:
  void recieve()
  {
    obj1.InputRec();
    obj1.processRec();
    obj1.show();

    obj2.InputSqu();
    obj2.processSqu();
    obj2.showSqu();
  }

};
int main()
{
  MIX objmain;

  objmain.recieve();
}
