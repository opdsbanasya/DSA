#include<bits/stdc++.h>

using namespace std;

void solve(int num[]){
    cout<<"Size of num inside solve: "<<sizeof(num)<<endl;

    num[0] = 12;
}

int main(){
    int num[10] = {1,2,3,4};
    solve(num);
    cout<<"Size of num inside main: "<<sizeof(num)<<endl;
    
    return 0;
}



// int arr[10] = {1,2,3,4};

// cout<<arr<<endl;
// cout<<&arr<<endl;
// cout<<&arr[0]<<endl;

// int* ptr = arr;
// cout<<ptr<<endl;
// cout<<&ptr<<endl;
// cout<<*ptr<<endl;

// cout<<1[arr]<<endl;


// char ch[10] = "Binary";
// char* c = ch;
// cout<<ch<<endl; // Binary
// cout<<&ch<<endl; // 0x61ff06
// cout<<ch[0]<<endl; // B
// cout<<&ch[2]<<endl; // Binary
// cout<<&c<<endl; // 0x61ff00
// cout<<*c<<endl; // B
// cout<<c<<endl; // Binary
// cout<<c+2<<endl; // nary
// cout<<*(c + 3)<<endl; // a
