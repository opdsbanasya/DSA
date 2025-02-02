#include<bits/stdc++.h>

using namespace std;

vector<vector<string> > groupAnagrams(vector<string> strs){
    map<string, vector<string>> mp;
    vector<vector<string> > ans;

    for(auto str: strs){
        string s = str;
        sort(s.begin(), s.end());
        mp[s].push_back(str);
    }

    for(auto i = mp.begin(); i!=mp.end(); i++){
        ans.push_back(i->second);
    }

    return ans;

}

// m-2
std::array<int, 256> hashAnagram(string s){
    std::array<int, 256> hash = {0};

    for(int i=0; i<s.size(); i++){
        hash[s[i]]++;
    }

    return hash;
}

vector<vector<string> > groupAnagramsm(vector<string> strs){
    map<std::array<int, 256>, vector<string>> mp;
    vector<vector<string> > ans;

    for(auto str: strs){
        mp[hashAnagram(str)].push_back(str);
    }

    for(auto i = mp.begin(); i!=mp.end(); i++){
        ans.push_back(i->second);
    }

    return ans;

}

int main(){

    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};

    vector<vector<string> > ans = groupAnagramsm(strs);

    for(auto i: ans){
        for(auto j: i){
            cout<< j <<" ";
        }
        cout<<endl;
    }
    

    return 0;
}