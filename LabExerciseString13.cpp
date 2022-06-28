/**
 * @file LabExerciseString13.cpp
 * @author Md. Yousuf Ali (yousuf.ce17@gmail.com)
 * @brief Sort string in the dictionary order
 * @version 0.1
 * @date 2022-06-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    char list[5][50];
    cout<<"Enter Five Words:"<<endl;
    for(unsigned int i = 0; i<5; i++){
        fgets(list[i], sizeof(list[i]), stdin);
    }

    /*Sorting string in the lexicographical order*/
    /*Insertion sorting algorithm implementation*/
    for(unsigned int i = 1; i<5; i++){
        unsigned int j = i;
        while(j>0 && strcmp(list[j-1], list[j]) > 0){
            char temp[50];
            strcpy(temp, list[j-1]);
            strcpy(list[j-1], list[j]);
            strcpy(list[j], temp);
            --j;
        }
    }
    cout<<"\nIn the lexicographical order:"<<endl;
    for(unsigned int i = 0; i<5; i++){
        fputs(list[i], stdout);
    }
    return 0;
}
