#include<iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter number of rows" << endl;
    cin >> n;

    for(int row=0; row<n; row++){
        int c = 0;
        for(int col=0; col<row+1; col++){
            cout<<(char)(64+c+1);
            c++;
        }
        for(int col=0; col<row; col++){
            cout<<(char) (64+(c-1));
            // cout<<c-1;
            c--;
        }
        cout<< endl;
    }
    return 0;
}