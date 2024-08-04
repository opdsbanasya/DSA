#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter number of rows" << endl;
    cin >> n;

    for(int row=1; row<=n; row++){
        for(int col=1; col<=n-row; col++){
            cout<<" ";
        }
        int c = 1;
        for(int col=1; col<=row; col++){
            cout<<c<<" ";
            c = c*(row-col)/col;                                             
        }
        cout<<endl;
    }

    return 0;
}