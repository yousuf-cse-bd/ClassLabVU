/**
 * @file LabExercize_7_5.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Sum of array using recursion function.
 * @version 0.1
 * @date 2022-06-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int sumOfArray(int A[], unsigned int size){
    if(size == 0){
        return A[0];
    }
    else{
        return (A[size] + sumOfArray(A, size - 1));
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    unsigned int size = 5;
    int A[size] = {1, 2, 3, 4 ,5};

    cout<<"Sum of Array: "<<sumOfArray(A, size);
    return 0;
}
