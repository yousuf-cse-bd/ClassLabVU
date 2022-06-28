/**
 * @file LabExerciseString6.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief String manipulation
 * @version 0.1
 * @date 2022-06-28
 * @since Tuesday, 5.23 PM
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    char line [1001];
    char newString[2001];
    cout<<"Enter a line: ";
    scanf(" %[^\n]", line);
    for(unsigned int i = 0; line[i] != '\0'; i++){
        if(islower(line[i])){
            newString[i] = toupper(line[i]);
        }
        else if(isupper(line[i])){
            newString[i] = tolower(line[i]);
        }
        else if(isdigit(line[i])){
            newString[i] = '#';
            newString[i+1] = '%';
            ++i;
        }
    }
    printf("New String: %s\n", newString);
    return 0;
}
