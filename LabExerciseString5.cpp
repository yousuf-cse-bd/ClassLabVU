/**
 * @file LabExerciseString5.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-28
 * @since Tuesday, 5.00 PM
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <cstring>
using namespace std;

void stringReverse(char text[]){
    char reverse[strlen(text) +1];
    for(int i = strlen(text) - 1, j = 0; i>=0;j++, i--){
        reverse[j] = text[i];
        // cout<<reverse[j];
    }
    printf("%s\n", reverse);
}

int main(int argc, char const *argv[])
{
    /* code */
    char line [1001];
    cout<<"Enter a line: ";
    scanf(" %[^\n]", line);
    stringReverse(line);
    
    return 0;
}
