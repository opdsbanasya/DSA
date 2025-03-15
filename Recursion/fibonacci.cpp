#include<bits/stdc++.h>

using namespace std;

int fibonacci(int n){
    if(n == 0 || n == 1) return n;

    int elem = fibonacci(n-1) + fibonacci(n-2);

    return elem;
}

int main(){
    int n;
    cout<<"Enter the nth term: ";
    cin>>n;

    
    cout<<fibonacci(n);
    return 0;
}