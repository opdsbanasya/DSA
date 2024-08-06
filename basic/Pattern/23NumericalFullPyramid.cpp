#include<iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter number of rows" << endl;
    cin >> n;

    for(int row=0; row< n; row++){
        // space
        for(int col=0; col<n-row-1; col++){
            cout<<" ";
        }
        // number
        for(int col=0; col<row+1; col++){
            cout<<row+col+1;
        }
        // reverse counting
        int start = 2*row;
        for(int col=0; col<row; col++){
            cout<< start;
            start--;
        }
        cout<< endl;
    }
    return 0;
}
// debug