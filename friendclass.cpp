#include<iostream>

using namespace std;

class BANK{
  int moneyW, moneyD, a;
public:
  void input()
  {
    cout<<"Enter 1 to deposit or 0 to withdraw"<<endl;
    cin>>a;
    if(a==1)
    {
      cout<<"Enter money to deposit: "<<endl;
      cin>>moneyD;
    }
    else if(a==0)
    {
      cout<<"Enter money to withdraw: "<<endl;
      cin>>moneyW;
    }
    else
    {
      cout<<"Wrong input"<<endl;

    }
  }
  friend class TRANSFER;
  friend class DEPOSIT;
  friend class WITHDRAW;
  friend class INTEREST;
};

class TRANSFER{
  int b;
public:
  void trans(BANK object)
  {
    cout<<"Enter money to Transfer: "<<endl;
    cin>>b;
    if(b>object.moneyD)
    {
    cout<<"SORRY THIS MONEY IS NOT AVAILABLE IN YOUR ACCOUNT"<<endl;

    }
    else
    {
    cout<<"MONEY transfer REQUEST ACCEPTED"<<endl;

  }
  }
friend class DEPOSIT;
};

class DEPOSIT{
  int q;
public:
  void deposit(BANK object,TRANSFER k)
  {
    if(object.a == 1 && k.b<object.moneyD)
    {
      cout<<"The amount you want to deposit has been deposited "<<endl;
      q = object.moneyD;
    }

  }
  friend class INTEREST;

};

class WITHDRAW{
  int p;
public:

  void withdraw(BANK object)
  {
    if(object.a == 0)
    {
      cout<<"The amount you want to withdraw will be withdrawn now "<<endl;
      p = object.moneyW;
    }

  }
friend class INTEREST;
};

class INTEREST{
  float interest;
public:
  void inter(BANK object, DEPOSIT i, WITHDRAW o)
  {
    if(object.a == 1)
    {

      interest = 0.1*i.q;
      cout<<"The interest on deposit is: "<<interest<<endl;
    }
    else if(object.a == 0)
    {
      interest = 0.2*o.p;
      cout<<"The interest on withdraw is: "<<interest<<endl;
    }

  }

};
int main()
{
  BANK object;
  DEPOSIT i;
  WITHDRAW o;
  TRANSFER k;
  INTEREST h;
  object.input();
  k.trans(object);
  i.deposit(object,k);
  o.withdraw(object);
  h.inter(object,i,o);


}
