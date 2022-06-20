/*****
* @Authoe: Muhammad Yousuf Ali
* @Since: ThursDay, 16 July 2020
* 3.Write a program that will print the following figure using suitable characters.
*
*/

#include <iostream>
using namespace std;
int i;
void firstLine(int signNum)
{
   
   for(i = 1;i<=signNum;i++)
   {
       cout<<"-";
   }
}
void tabFn(int tab)
{
    for(i = 1;i<=tab;i++)
    {
        cout<<"\t";
    }
}
void middleLine (int midLine)
{
    for(i = 1; i<=midLine;i++)
    {
        if(i == 1 || i == 2 ||i==midLine)
        {
           cout<<">";
        }
        else 
        {
            cout<<"-";
        }
    }
}
int main(int argc, char const *argv[])
{
    firstLine(17);
    tabFn(4);
    firstLine(17);
    cout<<"\n|\t\t|";
    tabFn(4);
    cout<<"|\t\t|"<<endl;
    cout<<"|\t\t|";
    tabFn(1);
    middleLine(20);
    tabFn(1);
    cout<<"|\t\t|";
    cout<<"\n|\t\t|";
    tabFn(4);
    cout<<"|\t\t|"<<endl;
    firstLine(17);
    tabFn(4);
    firstLine(17);

   a
    return 0;
}
