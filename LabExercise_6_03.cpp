#include <iostream>
using namespace std;

int main(void)
{
    int A[10];
    int i, n = 10;
    int sum = 0;

    for(i = 1;i<=n;i++)
    {
        A[i] = i;
        sum = sum + A[i];
    }
    cout<<"Sum of Array: "<<sum<<endl;

    return 0;
}
