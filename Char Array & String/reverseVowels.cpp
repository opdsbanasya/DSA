#include<bits/stdc++.h>

using namespace std;

bool isVowel(char ch){
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

string reverseVowels(string s){
    int i = 0;
    int j = s.size()-1;

    while(i<=j){
        if(isVowel(s[i]) == false)i++;
        else if(isVowel(s[j]) == false) j--;
        else {
            swap(s[i], s[j]);
            i++, j--;
        }
    }

    return s;
}

int main(){
    string str = "IceCreAm";

    cout<<"before: "<<str<<endl;
    cout<<"After: "<<reverseVowels(str)<<endl;
    return 0;
}