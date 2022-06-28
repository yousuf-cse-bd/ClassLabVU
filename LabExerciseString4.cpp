/**
 * @file LabExerciseString4.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief  Linear search for a char from string
 * @version 0.1
 * @date 2022-06-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    char line [1001];
    cout<<"Enter a line: ";
    scanf(" %[^\n]", line);
    char ch[2];
    cout<<"Enter a char is it exist?: ";
    scanf("%s", ch);
    bool status = false;
    for(unsigned int i = 0; line[i] != '\0'; i++){
        if(ch[0] == line[i]){
            status = true;
            break;
        }
    }
    if(status == true){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    return 0;
}
