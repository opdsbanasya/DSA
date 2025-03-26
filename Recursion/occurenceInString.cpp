#include<bits/stdc++.h>

using namespace std;

int isKeyPresent(string& name, char& key, int i){
    if(i>name.size()-1) return -1;

    if(name[i] == key) return i;

    isKeyPresent(name, key, i+1);
}


int main(){
    string name = "grab your chance";
    char key;
    cout<<"Enter the ker char: ";
    cin>>key;

    cout<<"Key Present at index "<<isKeyPresent(name, key, 0);
    return 0;
}