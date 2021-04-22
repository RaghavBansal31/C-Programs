#include<iostream>

using namespace std;

class PRODUCT
{  int rolln;
 static int count;
public:
  PRODUCT(int roll)
  {
    rolln = roll;
    count++;
  }
  void show()
  {
    cout<<"The roll is: "<<rolln<<" "<<"The count is: "<<count<<endl;
  }
  static void don()
  {
    cout<<"The total students are: "<<count<<endl;
  }
};
int PRODUCT::count;
int main()
{

 PRODUCT amn(101);
 amn.show();
 PRODUCT rmn(102);
 amn.show();
 PRODUCT::don();




}
