/**
 * @file LabExerciseString2.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief counter seperate chars
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
    unsigned int countVowels, countConsonants, countDigits, specialSymbole;
    countConsonants = countVowels = countDigits = specialSymbole = 0;
    char line [10001];
    cout<<"Enter a line here: ";
    scanf(" %[^\n]", line);

    for(unsigned int i = 0; line[i] != '\0'; i++){
        if(isdigit(line[i])){
           countDigits++;
        }
        else if(line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u'){
            countVowels++;
        }
        else if(isalpha(line[i])){
            if(line[i] != 'a' || line[i] != 'e' || line[i] != 'i' || line[i] != 'o' || line[i] != 'u'){
                countConsonants++;
            }
        }
        else{
            specialSymbole++;
        }
    }
    cout<<"The Vowels: "<<countVowels<<endl;
    cout<<"The Consonants: "<<countConsonants<<endl;
    cout<<"The Digits: "<<countDigits<<endl;
    cout<<"The Special Chars: "<<specialSymbole<<endl;
    return 0;
}
