#include<bits/stdc++.h>

using namespace std;

long long int PowMod(long long int x, long long int n, long long int M){
    long long int ans = 1;
    while(n>0){
        if(n%2 != 0) ans = (ans * x) % M;
        x = (x * x) % M;
        n = n/2;
    }
    
    return ans;
}

int main(){

    cout<<PowMod(2, 6, 10);

    return 0;
}