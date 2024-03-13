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


//2 states


bool cpu(string & s){
    for (auto &i : s)
    {
        if (i == 'a') return true;
    }return false;

}

int main() {
    string input;
    cout<<"Enter String:[input={a,b}] :  ";
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
