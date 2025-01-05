#include<bits/stdc++.h>

using namespace std;

bool palindromeByNewArray(char arr[]){
    int l=0, h=strlen(arr)-1;

    while(h>l){
        if(arr[l] == arr[h]){
            l++, h--;
        } else return false;
    }
    return true;
}

int main(){
    char arr[100];
    cout<<"Enter the word: "<<endl;
    cin>>arr;

    if(palindromeByNewArray(arr)){
        cout<<arr<<" is a palindrome."<<endl;
    } else {
        cout<<arr<<" is a not palindromw."<<endl;
    }
    return 0;
}