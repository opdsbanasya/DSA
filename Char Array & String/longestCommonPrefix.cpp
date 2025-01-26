#include<bits/stdc++.h>

using namespace std;

string longestCommonPrefix(vector<string> strs){
    string s = "";
    int size = strs.size();
    if(size == 0) return "";
    s = strs[0];
    for(int i = 1; i < size; i++){
        int j = 0;
        while(j < s.length() && j < strs[i].length() && s[j] == strs[i][j]){
            j++;
        }
        s = s.substr(0, j);
    }

    return s;
}

int main(){
    vector<string> s = {"flower", "flow", "flight"};

    cout<<"longest Commmon Prefix:" <<longestCommonPrefix(s);

    return 0;
}