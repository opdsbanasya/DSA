#include<iostream>

using namespace std;

int main(){
    // hardcode values
    string str = "arrow key";
    // cout<<name;

    string name;
    // cin>>name;
    // cout<<name;

    // above chars not appears after space (" ") so
    // we use getline()
    getline(cin, name);
    cout<<name;

    return 0;
}