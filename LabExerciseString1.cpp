/**
 * @file LabExerciseSting1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Count Words and Characters
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
    unsigned int countWords, countChars;
    countChars = 0;
    countWords = 1;
    char line [1001];
    cout<<"Enter a line here: ";
    scanf(" %[^\n]", line);

    for(unsigned int i = 0; line[i] != '\0'; i++){
        if(line[i] == ' '){
            ++countWords;
        }
        if(line[i] != ' '){
            ++countChars;
        }
    }

    cout<<"The Words Number: "<<countWords<<" and The Characters Number: "<<countChars<<endl;
    return 0;
}
