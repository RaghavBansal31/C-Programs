#include<iostream>

using namespace std;

class TIME{
  int hours,minutes,seconds;
public:
  void input()
  {
    cout<<"Enter time in hours:minutes:seconds: ";
    cin>>hours>>minutes>>seconds;
  }
  void result()
  {
    cout<<"The time is in form hours:minutes:seconds "<<endl;
    cout<<hours<<":"<<minutes<<":"<<seconds;
  }

  TIME clock(TIME aObject)
  {
    TIME PitajiObj;
    PitajiObj.hours = abs(hours - aObject.hours);
    PitajiObj.minutes = abs(minutes - aObject.minutes);
    PitajiObj.seconds = abs(seconds - aObject.seconds);
    return PitajiObj;

  }
};
int main()
{
  TIME aObject;
  aObject.input();

  TIME bObject;
  bObject.input();

 TIME cObject;
 cObject = bObject.clock(aObject);
 cObject.result();

}


// Private does not mean it can't be mutated.
// Private means the reference of that object cannot access directly using the parent object.
// If you have a getter and which return object reference then any object which has that instance can mutate it.
// Yes
