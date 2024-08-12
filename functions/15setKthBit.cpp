#include<iostream>

using namespace std;

int setKthBit(int n, int k){
    // int mask = 1<<k;
    // int ans = mask | n;
    // return ans;

    return n|(1<<k);
}

int main(){
    int n, k;
    cout<<"Enter number and kth num"<<endl;
    cin>>n>>k;
    int ans = setKthBit(n, k);
    cout<<ans;
    return 0;
}