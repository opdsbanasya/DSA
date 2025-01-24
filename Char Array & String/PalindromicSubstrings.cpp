#include<bits/stdc++.h>

using namespace std;

int expend(string str, int i, int j){
    int count = 0;
    while(i>=0 && j<str.length() && str[i] == str[j]){
        count++;
        i--;
        j++;
    }
    return count;
}

int palindromicSubstrings(string str){
    int count = 0;

    for(int i = 0; i<str.length(); i++){
        // odd
        int odd = expend(str, i, i);
        count = count + odd;

        //even
        int even = expend(str, i, i+1);
        count = count + even;
    }
    return count;
}

int main(){
    string str = "array";

    cout<<"number of palindromic substrings: "<< palindromicSubstrings(str)<<endl;

    return 0;
}