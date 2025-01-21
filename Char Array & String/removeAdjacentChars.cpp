#include<bits/stdc++.h>

using namespace std;

string removeAdjacent(string str){
    int i = 0, j = i+1;

    while(j<str.length()){
        cout<<"\ni = "<<i<<" and j = "<<j<<endl;
        if(str[i] == str[j]){
            cout<<str[i]<<" and "<<str[j]<<" removed"<<endl;
            str.erase(i, 2);
            cout<<str<<endl;

            if(i-1 >= 0){ 
                i--; 
                j--;
                cout<<"i = "<<i<<" and j = "<<j<<endl;

            } else {
                cout<<"i = "<<i<<" and j = "<<j<<endl;
            }
        } else {
            i++;
            j++;
            cout<<"i = "<<i<<" and j = "<<j<<endl;
        }
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