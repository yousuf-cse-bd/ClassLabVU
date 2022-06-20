/*****
* @Authoe: Muhammad Yousuf Ali
* @Since: ThursDay, 16 July 2020
* 2.Write a program using one print statement to print the pattern of asterisks as shown below :
*
*       *
*       *   *
*       *   *   *
*       *   *   *   *  
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i,j;
    for(i = 1;i<=4;i++)    
    {
        for(j = 1;j<=i;j++)
        {
            cout<<"*\t";
        }
        cout<<endl;
    }
    return 0;
}


