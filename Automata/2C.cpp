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
MEALY MACHINE
READ FROM: LSB->MSB
*/
int state=0;
string result="";

void q0(const char & c){
    switch (c)
    {
    case '0':
        result+="0";
        state=0;
        break;

    default:
        result+="1";
        state=1;
        break;
    }
}
void q1(const char & c){
    switch (c)
    {
    case '0':
        result+="1";
        state=1;
        break;

    default:
        result+="0";
        state=1;
        break;
    }
}



void cpu(const string & s){
    for (int i=s.length()-1;i>=1;i--)
    {
        switch (state)
        {
        case 0:
            q0(s[i]);
            break;

        default:
            q1(s[i]);
            break;
        }
    }
    cout<<0;
    for (int i=result.length()-1;i>=0;i--){
        cout<<result[i];
    }


}

int main() {
    string input;
    cout<<"Enter String:[input={0,1}] :  ";
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
