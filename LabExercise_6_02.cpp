#include <iostream>
using namespace std;
#define ARRAY_SIZE 5
int main(void)
{
    int i;
    int A[ARRAY_SIZE];

    for(i = 0 ; i<ARRAY_SIZE; i++)
    {
        cout<<"Enter An Item Here: ";
        cin>>A[i];
        if(A[i] == 0)
        {
            cout<<"\nEntered The Item: ";
            cout<<A[i]<<endl;
        }
        else
        {
            cout<<"\nEntered The Item: -";
            cout<<A[i]<<endl;
        }

    }

    return 0;
}

