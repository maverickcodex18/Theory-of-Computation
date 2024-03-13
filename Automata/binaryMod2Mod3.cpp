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

int state=0; //q0A

/*
q0:remainder 0 , mod 3
q1:remainder 1 , mod 3
q2:remainder 2 , mod 3

a: remainder 0,mod 2
b: remainder 1,mod 2

state : state no
qoa:0
q0b:1
q1a:2
q1b:3
q2a:4
q2b:5

USING DFA MINIMIZATION , IT CAN BE MINIMIZED TO 5 FX

q0a q0b : same fx
q1a q1b : same fx
q2a q2b : same fx
*/

void q0A(char & c){
    switch (c)
    {
    case '1':
        state=3;
        break;

    default:
        state=0;
        break;
    }
}
void q1A(char & c){
    switch (c)
    {
    case '1':
        state=1;
        break;

    default:
    state=4;
        break;
    }
}
void q2A(char & c){
    switch (c)
    {
    case '1':
        state=5;
        break;

    default:
    state=2;
        break;
    }
}

void cpu(string & s){
    for (auto &i : s)
    {
        switch (state)
        {
        case 0:
        case 1:
            q0A(i);
            break;
        case 2:
        case 3:
            q1A(i);
            break;
        default:
            q2A(i);
            break;
        }
    }
}

int main() {
    string input;
    cout<<"Enter String:[input={0,1}] :  ";
    cin>>input;
    cpu(input);
    //div by 2 or 3
    switch (::state)
    {
    case 0:
    case 1:
    case 2:
    case 4:
        cout<<"Div by 2 or 3\n";

        break;

    default:
        cout<<"Rejected: Div by 2 or 3\n";
        break;
    }
    //div by 2 not 3
    switch (::state)
    {
    case 2:
    case 4:
        cout<<"Div by 2 not 3\n";

        break;

    default:
        cout<<"Rejected: Div by 2 or 3\n";
        break;
    }
    //div by 3 not 2
    switch (::state)
    {
    case 1:
        cout<<"Div by 3 not 2\n";

        break;

    default:
        cout<<"Rejected: Div by 3 not 2\n";
        break;
    }
    //not by 2 neither by 3
    switch (::state)
    {
    case 3:
    case 5:
        cout<<"Not Div by 3 neither 2\n";

        break;

    default:
        cout<<"Rejected: Not Div by 3 neither 2\n";
        break;
    }
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
