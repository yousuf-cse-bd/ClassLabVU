/**
 * @file LabExerciseString7.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief String copy without strcpy() function
 * @version 0.1
 * @date 2022-06-28
 * @since Tuesday, 5.50 PM
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    char line [1001];
    char newString[1001];
    cout<<"Enter a line: ";
    scanf(" %[^\n]", line);

    for(unsigned int i = 0; line[i] != '\0'; i++){
        newString[i] = line[i];
    }

    cout<<"The new string: "<<newString<<endl;
    return 0;
}
