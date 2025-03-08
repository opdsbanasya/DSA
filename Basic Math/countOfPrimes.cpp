#include<bits/stdc++.h>

using namespace std;

int sieve(int n){
    vector<bool> prime(n, true); // Sieve
    prime[0] = prime[1] = false;
    int ans = 0;
    for(int i = 2; i<=n; i++){
        if(prime[i]){
            ans++;

            int j = 2*i;
            while(j<=n){
                prime[j] = false;
                j = j + i;
            }
        }
    }

    return ans;
}
int optimizedSieve(int n){
    vector<bool> prime(n, true); // Sieve
    prime[0] = prime[1] = false;
    int ans = 0;
    for(int i = 2; i<=sqrt(n); i++){
        if(prime[i]){
            int j = i*i;
            while(j<=n){
                prime[j] = false;
                j = j + i;
            }
        }
    }
    for(int i = 0; i<n; i++){
        if(prime[i]) ans++;
    }

    return ans;
}

int main(){
    int n = 25;
    int numberOfPrimes = sieve(n);

    cout<<"number of primes: "<<numberOfPrimes;
    cout<<"number of primes: "<<optimizedSieve(n);
    
    return 0;
}