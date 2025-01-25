#include<bits/stdc++.h>

using namespace std;

bool validAnagram(string s, string t){
    bool valid = true;
    if(s.length() != t.length()) return false;

    for(int i = 0; i<s.length(); i++){
        int pos = t.find(s[i]);
        cout<<"pos: "<<pos<<endl;
        if(pos == string::npos) return false;
        else t[pos] = '\0';
    }
    return valid;
}

int main(){ 
    string str = "a";
    string t = "ab";

    cout<<"is given strings are anagram: "<< validAnagram(str, t)<<endl;

    return 0;
}