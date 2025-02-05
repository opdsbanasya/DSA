#include <bits/stdc++.h>

using namespace std;

string zigzagConversion(string s, int numRows){
    if (numRows == 1) return s;
    int i = 0, row = 0;
    vector<string> zigzag(numRows);
    bool dir = true;

    while (true){
        if (dir){
            while (row < numRows && i < s.size()){
                zigzag[row++].push_back(s[i++]);
            }
            row = row - 2;
        } else{
            while (row >= 0 && i < s.size()){
                zigzag[row--].push_back(s[i++]);
            }
            row = 1;
        }
        dir = !dir;
        if (i >= s.size()) break;
    }

    string ans = "";
    for (int j = 0; j < zigzag.size(); j++){
        ans += zigzag[j];
        cout<<zigzag[j]<<endl;
        
    }

    return ans;
}

int main()
{
    string s = "ABCDEFGHI";
    cout << zigzagConversion(s, 3);
    return 0;
}