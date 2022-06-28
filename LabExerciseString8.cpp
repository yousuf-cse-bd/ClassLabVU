/**
 * @file LabExerciseString8.cpp
 * @author Md. Yousuf Ali(yousuf.cse17@gmail.com)
 * @brief Find the Frequency of Characters in a string
 * @version 0.1
 * @date 2022-06-28
 * @since 7.10 PM
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
    unsigned int a, b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;

    a = b = c = d = e = f = g = h = i = j = k =l = m = n =
     o = p = q = r = s = t = u = v = w = x = y = z = 0;
    for(unsigned int i = 0; line[i] != '\0'; i++){
        if(line[i] == 'a'){
            a++;
        }
         if(line[i] == 'b'){
            b++;
        }
         if(line[i] == 'c'){
            c++;
        }
         if(line[i] == 'd'){
            d++;
        } if(line[i] == 'e'){
            e++;
        }
         if(line[i] == 'f'){
            f++;
        }
         if(line[i] == 'g'){
            g++;
        } if(line[i] == 'h'){
            h++;
        }
         if(line[i] == 'i'){
            ++i;
        }
         if(line[i] == 'j'){
            j++;
        } if(line[i] == 'k'){
            k++;
        }
         if(line[i] == 'l'){
            l++;
        }
         if(line[i] == 'm'){
            m++;
        }
         if(line[i] == 'n'){
            n++;
        }
         if(line[i] == 'o'){
            o++;
        }
         if(line[i] == 'p'){
            p++;
        }
         if(line[i] == 'q'){
            q++;
        }
         if(line[i] == 'r'){
            r++;
        }
        if(line[i] == 's'){
            s++;
        }
         if(line[i] == 't'){
            t++;
        }
        if(line[i] == 'u'){
            u++;
        }
        if(line[i] == 'v'){
            v++;
        }
        if(line[i] == 'w'){
            w++;
        }if(line[i] == 'x'){
            x++;
        }
        if(line[i] == 'y'){
            y++;
        }
         if(line[i] == 'z'){
            z++;
        }
    }
    cout<<"A B C D E F G H I J K L M N O P Q R S T U V W X Y Z"<<endl;
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<" "<<i<<" ";
    cout<<j<<" "<<k<<" "<<l<<" "<<m<<" "<<n<<" "<<o<<" "<<p<<" "<<q<<" "<<r<<" ";
    cout<<s<<" "<<t<<" "<<u<<" "<<v<<" "<<w<<" "<<x<<" "<<y<<" "<<z<<endl;
    return 0;
}

