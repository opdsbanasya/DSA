#include<iostream>

using namespace std;

int main(){
    string name = "Rahul Saini";
    // getline(cin, name);
    cout<<"main: "<<name<<endl;

    // to get length
    int length = name.length();
    cout<<"Length: "<<length<<endl;

    // to check string is empty
    cout<<"is string empty? "<<name.empty()<<endl;

    // to push new char
    name.push_back('s');
    cout<<"After Inserting: "<<name<<endl;

    // delete a char
    name.pop_back();
    cout<<"After Deleting: "<<name<<endl;

    // to substring
    string firstName = name.substr(0, 5);
    cout<<"First name: "<<firstName<<endl;

    // to erase 
    name.erase(9, 10);
    cout<<"After erasing: "<<name<<endl;

    //! to compare
    string name2;
    cout<<"Enter string to compare: ";
    getline(cin, name2);
    cout<<"is "<<name<<" is equal to "<<name2<<"? "<<name.compare(name2)<<endl;;

    // to find
    cout<<"index number of 'u' is: " <<name.find('u')<<endl; 

    // to replace
    name.replace(6, 10, "Kumar");
    cout<<"After replacing: "<<name<<endl;
    
    return 0;
}