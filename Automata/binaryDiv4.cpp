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

int state=0; //initial state
void q0(char & c){
    switch (c)
    {
    case '1':
        state =1;
        break;

    default:
        state=0;
        break;
    }
}
void q1(char & c){
    switch (c)
    {
    case '1':
        state =3;
        break;

    default:
        state=2;
        break;
    }
}
void q2(char & c){
    switch (c)
    {
    case '1':
        state =1;
        break;

    default:
        state=0;
        break;
    }
}
void q3(char & c){
    switch (c)
    {
    case '1':
        state =3;
        break;

    default:
        state=2;
        break;
    }
}


int cpu(string & s){
    for (auto &i : s)
    {
        switch (state)
        {
        case 0:
            q0(i);
            break;
        case 1:
            q1(i);
            break;
        case 2:
            q2(i);
            break;

        default:
            q3(i);
        }
    }

    return ::state;
}



int main() {
    string input;
    cout<<"Enter String:[input={0,1}] :  ";
    cin>>input;
    cout<<"Remainder without converting to Decimal System is: "<<cpu(input);
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
