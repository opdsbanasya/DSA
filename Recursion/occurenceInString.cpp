#include<bits/stdc++.h>

using namespace std;

void isKeyPresent(string& name, char& key, int i, vector<int>& occus){
    if(i>name.size()-1) return;

    if(name[i] == key){
        occus.push_back(i);
    }

    isKeyPresent(name, key, i+1, occus);
}

int main(){
    string name = "grab your chance";
    char key;
    cout<<"Enter the ker char: ";
    cin>>key;

    vector<int> occus;

    isKeyPresent(name, key, 0, occus);
    if(occus.size() == 0){ 
        cout<<"Not Present"<<endl;
        return 0;
    }
    
    // count of Occurence
    cout<<key<<" is present "<<occus.size()<<" times"<<endl;
    for(int i: occus){
        cout<<i<<" ";
    }
    return 0;
}