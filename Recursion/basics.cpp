#include<bits/stdc++.h>

using namespace std;

void printReverse(int n){
    if(n==0) return;
    
    cout<<n<<" ";
    
    printReverse(n-1);
}

int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    printReverse(n);

    return 0;
}