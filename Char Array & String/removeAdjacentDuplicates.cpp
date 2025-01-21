#include<bits/stdc++.h>

using namespace std;

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

int main(){
    string str = "bbaacaab";

    cout<<str<<endl;
    string rmstr = removeAdjacent(str);
    cout<<rmstr<<endl;
    return 0;
}