#include <iostream>
using namespace std;

int main(void)
{
    int A[10];
    int i, n = 10;
    double sum = 0.0;

    for(i = 1;i<=n;i++)
    {
        A[i] = i;
        sum = sum + A[i];
    }
    cout<<"Sum of Array: "<<sum<<endl;
    sum = sum / n;
    cout<<"Average of Array: "<<sum<<endl;

    return 0;
}

