#include<bits/stdc++.h>

using namespace std;

string reverseOnlyLetters(string s){
    int i = 0, j = s.length()-1;

    while(i<=j){
        if(!isalpha(s[i])) i++;
        else if(!isalpha(s[j])) j--;
        else {
            swap(s[i], s[j]);
            i++, j--;
        }
    }
    return s;
}

int main(){
    string str = "a-bC-dEf-ghIj";

    cout<<"before: "<<str<<endl;
    cout<<"After: "<<reverseOnlyLetters(str)<<endl;
    return 0;
}