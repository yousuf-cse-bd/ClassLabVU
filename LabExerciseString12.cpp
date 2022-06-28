/**
 * @file LabExerciseString12.cpp
 * @author Md. Yousuf Ali (yousuf.ce17@gmail.com)
 * @brief WAP to remove all characters in a string except alphabet.
 * @version 0.1
 * @date 2022-06-28
 * @since 11.40PM
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    char line[1001] = "md. yousuf ali 101 vu";
    for(unsigned int i = 0; line[i] != '\0'; i++){
        if(isalpha(line[i])){
            cout<<line[i];
        }
        else{
            continue;
        }
    }
    return 0;
}
