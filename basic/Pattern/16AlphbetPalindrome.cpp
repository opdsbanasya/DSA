#include<iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter number of rows" << endl;
    cin >> n;

    for(int row=0; row<n; row++){
        int col;
        for(col=0; col<row+1; col++){
            cout<<(char)(64+col+1);
        }
        col = col - 1;
        for(; col>0; col--){
            cout<<(char) (64+(col));
        }
        cout<< endl;
    }
    return 0;
}

// or can use third variable approach 