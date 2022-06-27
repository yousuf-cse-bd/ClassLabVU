/**
 * @file LabExercise_7_9.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Insert an Element
 * @version 0.1
 * @date 2022-06-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

/*Insert an element*/

void insertElement(int A[], unsigned int size, unsigned int specificPosition){
    int newElement;
    cout<<"Enter the new element here: ";
    cin>>newElement;

    for(unsigned int i = specificPosition; i<=size; i++){
        A[i+1] = A[i];
    }
    A[specificPosition] = newElement;
}

int main(int argc, char const *argv[])
{
    /* code */
    unsigned int size;
    cout<<"Enter the size: ";
    cin>>size;
    int A[size + 1];
    for(unsigned int i = 0; i<size; i++){
        cout<<"Index: "<<i<<"\tElement = ";
        cin>>A[i];
    }
    unsigned int position;
    cout<<"Enter the specific position[0 to"<<size<<"]: ";
    cin>>position;
    if(position <= size){
        insertElement(A, size, position);
        for(unsigned int i = 0; i<=size; i++){
            cout<<"Index: "<<i<<"\tElement = "<<A[i]<<endl;
        }
    }
    else{
        cout<<"Enter the right position.\n";
    }
    return 0;
}
