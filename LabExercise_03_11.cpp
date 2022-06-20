///Vowel vs Consonant
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter Any Letter Here: ";
    cin>>ch;

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        cout<<"Vowel"<<endl;
    }
    else if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout<<"Vowel"<<endl;
    }
    else
    {
        cout<<"Consonant"<<endl;
    }
    return 0;
}
