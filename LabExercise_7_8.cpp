/**
 * @file Exercise_7_8.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Insertion sort
 * @version 0.1
 * @date 2022-06-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;
void sortElement(int A[], unsigned int size){
    for(unsigned int i = 1; i<size; i++){
        unsigned int j = i;
        while(j>0 && A[j-1] < A[j]){
            swap(A[j-1], A[j]);
            j--;
        }
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    int A[] = {10, 2, 3, 1, 4, 5, 6, 7, 8, 9};
    int n = sizeof(A) / sizeof(int);
    sortElement(A, n);

    for(int x: A){
        cout<<x<<" ";
    }
    cout<<endl;
    
    return 0;
}
