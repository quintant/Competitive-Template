#include <bits/stdc++.h>
void fastscan(int &x){
    bool neg=false;
    register int c;
    x =0;
    c=getchar();
    if(c=='-')
    {
        neg = true;
        c=getchar();
    }
    for(;(c>47 && c<58);c=getchar())
        x = (x<<1) + (x<<3) +c -48;
    if(neg)
        x *=-1;
}
typedef long long ll;

using namespace std;


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    string a = "Boi";
    cout << a << endl;
    for(char& c : a) {
        cout << c;
    }
    
}