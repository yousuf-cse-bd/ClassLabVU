///Maximum and Minimum Items From an Array

#include <iostream>
using namespace std;

int main(void)
{
    int Nth;
    cout<<"Enter Nth Positive Value Here: "<<endl;
    cin>>Nth;

    if(Nth>0)
    {
      int A[Nth];
      int i,smallValue,capitalValue;
      for(i = 0; i<Nth;i++)
      {
          cout<<"Index: "<<i<<"\tItem = ";
          cin>>A[i];
      }
      smallValue = A[0];
      capitalValue = A[0];
      for(i = 0 ;i < Nth ; i++)
      {
          if(smallValue>A[i])
          {
              smallValue = A[i];
          }
          if(capitalValue<A[i])
          {
              capitalValue = A[i];
          }
      }
      cout<<"\nMaximum Item: "<<capitalValue<<endl;
      cout<<"Minimum Item: "<<smallValue<<endl;
    }
    else
    {
        cout<<"Enter Positive Value:"<<endl;
    }

    return 0;
}
