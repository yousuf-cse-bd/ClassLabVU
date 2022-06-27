/**
 * @file LabExerciseString3.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Produce the first letter of string capitalized 
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
    char line [10001];
    cout<<"Enter a line here: ";
    scanf(" %[^\n]", line);
    printf("%c",toupper(line[0]));
    for(unsigned int i = 0; line[i] != '\0'; i++){
        if(line[i] == ' '){
            printf("%c",toupper(line[i+1]));
        }
        else{
            cout<<line[i+1];
        }
    }
    cout<<endl;
    return 0;
}
