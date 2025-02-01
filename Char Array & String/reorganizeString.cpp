#include<bits/stdc++.h>

using namespace std;

string reorganizeString(string s){
    int hash[26] = {0};

    for(int i = 0; i<s.size(); i++){
        hash[s[i] - 'a']++;
        cout<<hash[s[i] - 'a']<<" ";
    }
    cout<<endl;

    char maxfreqChar;
    int maxFreq = INT_MIN;
    for(int i=0; i<26; i++){
        if(hash[i] > maxFreq){
            maxFreq = hash[i];
            maxfreqChar = i + 'a';
            cout<<"max freq char: "<<maxfreqChar<<" and max freq: "<<maxFreq<<endl;
        }
    }

    // place most frequent char
    int index = 0;
    while(maxFreq > 0 && index < s.size()){
        s[index] = maxfreqChar;
        maxFreq--;
        index += 2;
        cout<<s<<endl;
    }

    cout<<endl;
    if(maxFreq != 0) return "";
    
    //* place rest chars
    for(int i = 0; i<26; i++){
        while(hash[i] > 0 && maxfreqChar != i +'a'){
            if(index >= s.size()) index = 1;
            s[index] = i + 'a';
            hash[i]--;
            index += 2;
            cout<<s<<endl;
        }
    }


    return s;
}

int main(){

    string str = "aaab";
    cout<<reorganizeString(str)<<endl;

    return 0;

}