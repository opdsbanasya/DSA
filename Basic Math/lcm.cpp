#include<bits/stdc++.h>

using namespace std;

int getGcd(int a, int b){
    if(a == 0) return b;
    if(b == 0) return a;
    while(a>0 && b>0){
        if(a > b) a = a-b;
        else b = b-a;
    }

    return a == 0 ? b : a;
}

vector<int> lcmAndGcd(int a, int b) {
    vector<int> ans;
    int gcd = getGcd(a, b);
    int lcm = (a*b)/gcd;
    
    ans.push_back(lcm);
    ans.push_back(gcd);

    return ans;
}

int main(){
    vector<int> ans = lcmAndGcd(10, 5);

    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}