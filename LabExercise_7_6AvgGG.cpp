/**
 * @file LabExercise_7_6AvgGG.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Avg value from array using recursion method
 * @version 0.1
 * @date 2022-06-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

double avgRecursion(int A[],  unsigned int size, unsigned int i){
    // Last element
    if(i == size-1){
        return A[i];
    }
    /*When index is 0, divide sum computed so far by size*/
    if(i == 0){
        return (A[i] + avgRecursion(A, size, ++i))/size;
    }
    else{
        /*Compute sum*/
        return (A[i] + avgRecursion(A, size, ++i));
    }
    
}

double average(int A[], int size){
    return avgRecursion(A, size, 0);
}

int main(int argc, char const *argv[])
{
    /* code */
    int A[] = {10, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(A) / sizeof(int);

    cout<<"Average of: "<<average(A, n)<<endl;
    return 0;
}
