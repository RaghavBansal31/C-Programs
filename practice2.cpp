#include<iostream>

using namespace std;

class SALARY
{
  int hours, salary, total;
public:
  void show()
  {
    cout<<"Enter hours and salary: ";
    cin>>hours>>salary;

  }
  void process()
  {
    total = hours* salary;
  }
  void result()
  {
    cout<<"The total salary is: "<<total<<endl;
  }
};

int main()
{
  SALARY *AP;
  SALARY object;
  AP = &object;

  AP->show();
  AP->process();
  AP->result();

  (*AP).show();
  (*AP).process();
  (*AP).result();

  (*(&object)).show();
  (*(&object)).process();
  (*(&object)).result();

  ((&object))->show();
  ((&object))->process();
  ((&object))->result();
}
