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

//mealy machine
void cpu(const string & s){
    for (auto &i : s)
    {
        switch (i)
        {
        case '0':
            cout<<1;
            break;

        default:
            cout<<0;
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
