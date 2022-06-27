/**
 * @file LabExercize_7_4.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief All positive value print using recursion method
 * @version 0.1
 * @date 2022-06-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

 void allPositiveValuePrint(int A[], unsigned int size, unsigned int i){
    if(i<size){
        if(A[i] >= 0){
            cout<<A[i]<<" ";
        }
        allPositiveValuePrint(A, size, ++i);
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    unsigned int size = 5;
    int A[size] = {4, -5, -1, 0, -3};
    allPositiveValuePrint(A, size,0);
    return 0;
}
