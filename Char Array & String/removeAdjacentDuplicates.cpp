#include<bits/stdc++.h>

using namespace std;

// without using new string
string removeAdjacent(string str){
    int i = 0, j = i+1;

    while(j<str.length()){
        if(str[i] == str[j]){
            str.erase(i, 2);
            if(i-1 >= 0) i--, j--;
        } else i++, j++;
    }

    return str;
}

// using new string
string removeAllAdjacent(string str){
    string newstr = "";

    int i = 0;

    while(i<str.length()){
        if(newstr.length() - 1 >= 0 && newstr[newstr.length()-1] == str[i]){
            newstr.pop_back();
        } else {
            newstr.push_back(str[i]);
        }
        i++;
    }
    return newstr;
}

int main(){
    string str = "bbaacaab";

    cout<<str<<endl;
    string rmstr = removeAdjacent(str);
    cout<<rmstr<<endl;
    string nrmstr = removeAllAdjacent(str);
    cout<<nrmstr<<endl;
    return 0;
}