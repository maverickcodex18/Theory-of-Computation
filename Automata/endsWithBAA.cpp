#define cpp
#ifdef cpp
//cpp
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<stack>
#include<cmath>
using namespace std;

/*
first create NFA
convert it to DFA
create MOORE
*/

int state=0;
void isQ3(){
    cout<<(state==3)?"1":"";
}

void commonQ0Q3(const char & c){
    switch (c)
    {
    case 'a':
        state=0;
        break;

    default:
        state=1;
        break;
    }
}



void q0(const char & c){
    commonQ0Q3(c);

}
void q3(const char & c){
    commonQ0Q3(c);
    cout<<1;
}
void q1(const char & c){
    switch (c)
    {
    case 'a':
        state=2;
        break;

    default:
        state=1;
        break;
    }
    cout<<0;
}
void q2(const char & c){
    switch (c)
    {
    case 'a':
        state=3;
        break;

    default:
        state=1;
        break;
    }
    cout<<0;
}



void cpu(const string & s){
    for (auto &&i : s)
    {
        switch (::state)
        {
        case 0:
            q0(i);
            break;
        case 1:
            q1(i);
            break;
        case 2:
            q2(i);
            if (s[s.length()-1]==i) isQ3();
            break;
        case 3:
            q3(i);
            break;
    }

}
}

int main() {
    string input;
    cout<<"Enter String:[input={a,b}] :  ";
    cin>>input;
    cpu(input);
    return 0;
}
#else
//c

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main() {

    return 0;
}
#endif
