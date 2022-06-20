///Copy Array Elements
#include <iostream>
using namespace std;

int main()
{
    int i, nTh;
    cout<<"Enter Nth Number Here: ";
    cin>>nTh;

    if(nTh>0)
    {
        int firstArray[nTh];
        int secondArray[nTh];

        for(i = 0; i<nTh; i++)
        {
            cout<<"Index: "<<i<<"\tItem = ";
            cin>>firstArray[i];
            secondArray[i] = firstArray[i];
        }
        cout<<endl;
        for(i = 0 ; i<nTh; i++)
        {
            cout<<"Index: "<<i<<"\tItem = "<<secondArray[i]<<endl;
        }

    }
    else
    {
        cout<<"Enter Positive Value Here...!"<<endl;
    }

    return 0;
}
