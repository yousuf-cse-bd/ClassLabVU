/**
 * @file LabExercise_7_10.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Original matrix to transpose matrix
 * @version 0.1
 * @date 2022-06-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int orginalMatrix[2][3] = {
        {4,   5,   6,},
        {12,  10,  20}
    };
    
    cout<<"Orginal Matrix"<<endl;
    for(unsigned int i = 0; i<2; i++){
        for(unsigned int j = 0; j<3; j++){
            cout<<orginalMatrix[i][j]<<"\t";
        }
        cout<<endl;
    }
    int transposeMatrix[3][3];
    for(unsigned int i = 0; i<2; i++){
        for(unsigned int j = 0; j<3; j++){
            transposeMatrix[i][j] = orginalMatrix[i][j];
        }
        cout<<endl;
    }
    cout<<"\nTranspose Matrix"<<endl;
    for(unsigned int i = 0; i<3; i++){
        for(unsigned int j = 0; j<2; j++){
            cout<<transposeMatrix[j][i]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
