#include<bits/stdc++.h>

using namespace std;

vector<bool> optimizedSieve(long long n){
    vector<bool> prime(n + 1, true); // Sieve
    prime[0] = prime[1] = false;
    for(int i = 2; i<=sqrt(n); i++){
        if(prime[i]){
            long long j = i*i;
            while(j<=n){
                prime[j] = false;
                j = j + i;
            }
        }
    }

    return prime;
}

long long primeProduct(long long L, long long R){
    vector<bool> sieve = optimizedSieve(sqrt(R));
    vector<int> basePrime;
    
    long long M = pow(10,9)+7;

    for(int i=0; i<sieve.size(); i++){
        if(sieve[i]) basePrime.push_back(i);
    }

    vector<bool> segSieve(R - L + 1, true);
    if(L == 0 || L == 1) segSieve[L]  = false;

    for(auto prime:basePrime){
        cout<<"prime = "<<prime<<" ";
        int firstMulti = (L/prime) * prime;
        if(firstMulti < L) firstMulti += prime;
        cout<<"Fm = "<<firstMulti<<" ";
        int j = max(firstMulti, prime * prime);
        while(j <= R){
            cout<<"j = "<<j<<" ";
            segSieve[j-L] = false;
            j += prime;
        }
        cout<<endl;
    }
    long long ans = 1;

    for(int i = 0; i<segSieve.size(); i++){
        cout<<"seg = "<<segSieve[i]<<" ";
        if(segSieve[i]){
            cout<<"L = "<<(L+i)<<" ans = "<<ans;
            ans = (ans * (L+i)) % M;
        }
        cout<<endl;
    }

    return ans;
}


int main(){
    int L = 1, R = 10;
    long long ans = primeProduct(L, R);

    cout<<ans;

    return 0;
}