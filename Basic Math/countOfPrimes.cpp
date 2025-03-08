#include<bits/stdc++.h>

using namespace std;

int countPrimes(int n){
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

int main(){
    int n = 25;
    int numberOfPrimes = countPrimes(n);

    cout<<"number of primes: "<<numberOfPrimes;
    return 0;
}