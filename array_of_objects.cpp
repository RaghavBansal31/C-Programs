#include<iostream>

using namespace std;

class STUDENTS{
 int m,s,m2,e,total;

public:
  void input(int maths,int science,int management, int english)
  {
    m = maths;
    s = science;
    m2 = management;
    e = english;
  }
  void process()
  {
    total = m+s+m2+e;
  }
  int show()
  {
    return total;
  }
};

int main()
{
  int i,n;
  int ma[10],sc[10],man[10],en[10];
  float percentage[10],average[10];
  cout<<"Enter number of students: ";
  cin>>n;

  STUDENTS obj[i];

  for(i=0;i<n;i++)
  {
    cout<<"Enter Mathematics marks: ";
    cin>>ma[i];
    cout<<"Enter science marks: ";
    cin>>sc[i];
    cout<<"Enter management marks: ";
    cin>>man[i];
    cout<<"Enter english marks: ";
    cin>>en[i];

  }

  for(i=0;i<n;i++)
  {
    obj[i].input(ma[i],sc[i],man[i],en[i]);
    obj[i].process();
  }
  int max = 0;
  for(i=0;i<n;i++)
  {
    if(obj[i].show()>max)
    {
      max =obj[i].show();
    }
  }
  cout<<"The MaxTotal is: "<<max<<endl;

  for(i=0;i<n;i++)
  {
     percentage[i] = (obj[i].show()/(n*100))*100;

  }
  float min = 100.00;
  for(i=0;i<n;i++)
  {
     if(percentage[i]<min)
     {
       min = percentage[i];
     }

  }
  cout<<"The minimumPercentage is: "<<min<<endl;

  for(i=0;i<n;i++)
  {
     average[i] = (obj[i].show()/(n));
     cout<<"The AverageTotal is: "<<average[i]<<endl;
  }

}
