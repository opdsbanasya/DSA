#include<bits/stdc++.h>

using namespace std;

vector<bool> optimizedSieve(int n){
    vector<bool> prime(n, true); // Sieve
    prime[0] = prime[1] = false;
    for(int i = 2; i<=sqrt(n); i++){
        if(prime[i]){
            int j = i*i;
            while(j<=n){
                prime[j] = false;
                j = j + i;
            }
        }
    }

    return prime;
}

vector<bool> segmentedSieve(int L, int R){
    vector<bool> sieve = optimizedSieve(sqrt(R));
    vector<int> basePrime;

    for(int i=0; i<=sieve.size(); i++){
        if(sieve[i]) basePrime.push_back(i);
    }

    vector<bool> segSieve(R - L + 1, true);
    if(L == 0 || L == 1) segSieve[L]  = false;

    for(auto prime:basePrime){
        int firstMulti = (L/prime) * prime;
        if(firstMulti < L) firstMulti += prime;

        int j = max(firstMulti, prime * prime);
        while(j <= R){
            segSieve[j-L] = false;
            j += prime;
        }
    }

    return segSieve;
}


int main(){
    int L = 110, R = 130;
    vector<bool> ss = segmentedSieve(L, R);

    for(int i = 0; i<ss.size(); i++){
        if(ss[i]) cout<<L<<" "; 
        L++;
    }
    
    return 0;
}