//function overloading question
#include<iostream>
#include<string>
using namespace std;
class cal_area{
public:
 cal_area(int a)
{
  int area=4*(a)*(a);
  cout<<"area of square"<<" "<<area<<endl;
  }
   cal_area(int l,int b)
  {
  int area=l*b;
  cout<<"area of rectangle"<<" "<<area<<endl;
  }
};
int main()
{
  cal_area A1(4),A2(3,4);
 }
