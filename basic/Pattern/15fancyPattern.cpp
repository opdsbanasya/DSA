#include <iostream>

using namespace std;
/*
1
2*2
3*3*3
4*4*4*4
4*4*4*4
3*3*3
2*2
1
*/
int main()
{
    int n;
    cout << "Enter number of rows" << endl;
    cin >> n;

    for(int row = 0; row<n;row++){
        for (int col = 0; col < row+1; col++) {
            if(col == row){
                cout<<row+1;
            } else{
                cout<<row+1<<"*";
            }
        }
        cout<< endl;
        
    }
    for(int row = 0; row<n;row++){
        for (int col = 0; col < n-row; col++) {
            if(col == n-row-1){
                cout<<n - row;
            } else{
                cout<<n-row<<"*";
            }
        }
        cout<< endl;
        
    }
    return 0;
}