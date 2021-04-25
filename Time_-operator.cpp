#include<iostream>

using namespace std;

class TIME
{
  int hours,minutes,seconds;
public:
  void input(int x, int y,int z)
  {
    hours = x;
    minutes = y;
    seconds = z;
  }
  void show()
  {
    cout<<"hours:"<<hours<<" "<<"minutes:"<<minutes<<" "<<"seconds:"<<seconds<<" "<<endl;
  }
  TIME operator - (TIME robj)
  {
    TIME bhaji;
    bhaji.hours = hours - robj.hours;
    bhaji.minutes = minutes - robj.minutes;
    bhaji.seconds =  seconds - robj.seconds;
    return bhaji;
  }
};
int main()
{
  TIME amnobj;
  amnobj.input(3,4,16);
  amnobj.show();

  TIME rmnobj;
  rmnobj.input(1,3,10);
  rmnobj.show();

  TIME chamn = amnobj - rmnobj;
  chamn.show();


}
