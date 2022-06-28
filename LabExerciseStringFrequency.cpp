/**
 * @file LabExerciseStringFrequncy.cpp
 * @author Md. Yousuf Ali(yousuf.cse17@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-28
 * @since 7.50PM
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

void stringFrequncy(string text){
    // Find length
    unsigned int lenght = text.length();
    unsigned frequncy[26] = {0};

    // counting each characters
    for(unsigned int i = 0; i<lenght; i++){
        frequncy[text[i] - 'a'] ++;
    }
    // Travers left to right
    for(unsigned int i = 0; i<lenght; i++){
        // if frequncy of character text[i] is not equal to zero
        if(frequncy[text[i] - 'a'] != 0){
            /*print the character along with its frequency*/
            cout<<text[i]<<frequncy[text[i] - 'a']<<' ';
            //update frequncy of text[i] to zero
            //so the same character is not printed
            //again
            /*Upon print then zero otherwise duplicate result*/
            frequncy[text[i] - 'a'] = 0;
        }
    }
    
}

int main(int argc, char const *argv[])
{
    stringFrequncy("yousuf ali");
    cout<<endl;
    stringFrequncy("abcabc");
    return 0;
}
