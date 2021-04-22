#include<iostream>

using namespace std;

class COLLEGE{
  int CollegeFee;
public:
  void input1()
  {
    cout<<"Enter your college fee money: ";
    cin>>CollegeFee;
  }

  float getCFee()
  {
    return CollegeFee;
  }

};

class POCKET:public COLLEGE{
  int PocketMoney;
public:
  void input2()
  {
    cout<<"Enter your pocket money: ";
    cin>>PocketMoney;
  }

  float getPFee()
  {
    return PocketMoney;
  }
};

class TRAINING{
  int TrainingFee;
public:
  void input3()
  {
    cout<<"Enter your Training fee money: ";
    cin>>TrainingFee;
  }

  float getTFee()
  {
    return TrainingFee;
  }
};

class SUM:public POCKET,public TRAINING{
  int sum;

public:
  void summ()
  {
    input1();
    input2();
    input3();
    sum = getTFee+getCFee+getPFee
    cout<<"The total sum is: "<<sum<<endl;
  }
};
int main()
{

  SUM object;
  object.summ();
}
