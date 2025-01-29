#include<bits/stdc++.h>

using namespace std;

string expendCheck(string s, int i, int j){
    string bns = "";
    int maxLen = 0;
    while(i>=0 && j < s.size() && s[i] == s[j]){
        bns = s.substr(i,j+1-i);
        i--;
        j++;
    }

    return bns;
}

string longestPlaindromic(string s){
    if(s.size() <= 2){
        return (s[0] == s[1]) ? s : string(1, s[0]);;
    }
    
    string ans = "";

    for(int i = 0; i<s.size(); i++){
        string odd = expendCheck(s, i, i);
        string even = expendCheck(s, i, i+1);
        if(odd.size() > even.size() && ans.size() < odd.size()) ans = odd;
        if(odd.size() < even.size() && ans.size() < even.size()) ans = even;
    }
    return ans;
}

int main(){
    string str = "aaa";

    cout<<"longest: "<<longestPlaindromic(str)<<endl;
    return 0;
}