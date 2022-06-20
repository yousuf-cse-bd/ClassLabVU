///Second Largest Value

#include <iostream>
using namespace std;

int main()
{
    int nTh,i,j,largestValue,secondLargestValue;

    cout<<"Enter Nth Value Here: ";
    cin>>nTh;

    if(nTh>0)
    {
        int A[nTh];
        for(i = 0; i<nTh; i++)
        {
            cout<<"Index: "<<i<<"\tItem = ";
            cin>>A[i];
        }

        for(i = 0 ; i<nTh - 1; i++)
        {
            for(j = i+1; j<nTh; j++)
            {
                if(A[i]>A[j])
                {
                    swap(A[i],A[j]);
                }
            }
        }

        cout<<"The Second Largest Value: "<<A[nTh - 2]<<endl;
    }
    else
    {
        cout<<"Enter The Positive Value...!"<<endl;
    }

    return 0;
}
