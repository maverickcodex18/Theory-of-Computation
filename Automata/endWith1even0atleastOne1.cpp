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

int state=0; //q0 state
void q0(char & c){
    switch (c)
    {
    case '1':
        state=1;
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
        state=2;
        break;

    default:
        state=0;
        break;
    }
}


bool cpu(string &s){
    for (auto &i : s)
    {
        //q0 and q1 have same transition table that's why not making different fx for q1
        switch (state)
        {
        case 0:
        case 1:
            q0(i);
            break;

        default:
            q2(i);
            break;
        }
    }
    //final state=q1
    if (state==1) return true;
    return false;
}


int main() {
    string input;
    cout<<"Enter String:[input={0,1}] :  ";
    cin>>input;
    if (cpu(input)) cout<<"Accepted";
    else cout<<"Rejected";
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
