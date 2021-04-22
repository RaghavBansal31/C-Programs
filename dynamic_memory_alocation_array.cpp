#include<iostream>

using namespace std;


int main()
{

  int *A = new int[10];
  for(int i = 0;i<10;i++)
  {
    cout<<"Enter value: ";
    cin>>A[i];
  }

  for(int i = 0;i<10;i++)
  {
    cout<<"The value is: ";
    cout<<A[i]<<endl;
  }
  delete[]A;
}
