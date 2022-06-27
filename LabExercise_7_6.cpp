/**
 * @file LabExecise_7_6.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Average value all return value using recursion
 * @version 0.1
 * @date 2022-06-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;
double avgRecursion(int A[], unsigned int size, unsigned int i){
    static double sum = 0.0;
    if(i < size){
        sum = sum + A[i];
        avgRecursion(A, size, ++i);
    }
    return sum;
}
int main(int argc, char const *argv[])
{
    /* code */
    unsigned int size = 5;
    int A[size];
    for(unsigned int i = 0; i<size; i++){
        cout<<"Index: "<<i<<"\tElement = ";
        cin>>A[i];
    }
    cout<<"Avg of array element: "<<avgRecursion(A, size, 0)/size<<endl;
    return 0;
}
