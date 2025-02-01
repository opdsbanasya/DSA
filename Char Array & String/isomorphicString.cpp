#include<bits/stdc++.h>

using namespace std;

bool isIsomorphic(string s, string t) {
    int hash[256] = {0};
    bool isTMapped[256] = {0};

    for(int i = 0; i<s.size(); i++){
        if(hash[s[i]] == 0 && isTMapped[t[i]] == 0){
            hash[s[i]] = t[i];
            isTMapped[t[i]] = true;
        }
    }

    for(int i = 0; i<s.size() ; i++){
        if(char(hash[s[i]] != t[i])){
            return false;
        }
    }

    return true;
}

int main(){

    string s = "title";
    string t = "paper";

    cout<<isIsomorphic(s,t);

    return 0;
}