#include <iostream>
using namespace std;

int main()
{
  double x,y;

  cout<<"Enter X = ";
  cin>>x;
  cout<<"\nEnter Y = ";
  cin>>y;

  cout<<"X = "<<x<<endl;
  cout<<"Y = "<<y<<endl;

  cout<<"Sum = "<<x + y<<endl;
  if(x>y)
  {
      cout<<"Difference :"<<x-y<<endl;
  }
  else
  {
     cout<<"Difference :"<<y-x<<endl;
  }
  cout<<"Product :"<<x*y<<endl;
  if(y==0)
  {
      cout<<"Undefined"<<endl;
  }
  else
  {
      cout<<"Division :"<<x/y<<endl;
  }


    return 0;
}
