/**
 * @file LavExerciseString9.cpp
 * @author Md. Yousuf Ali(yousuf.cse17@gmail.com)
 * @brief Reverse a sentence using recursion
 * @version 0.1
 * @date 2022-06-28
 * @since 11.24 AM; Tuesday
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char text[], unsigned int length, unsigned int i){
    if(i == length){
        cout<<text[i];
    }
    else{
        cout<<text[i];
        reverseString(text, length, --i);
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    char line[10001] = "md yousuf ali";
    reverseString(line, 0, strlen(line));
    return 0;
}
