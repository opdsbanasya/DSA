#include<bits/stdc++.h>

using namespace std;

string intTORoman(int num){
    string roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int nums[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string ans = "";

    for(int i = 0; i<13; i++){
        while(num >= nums[i]){
            ans = ans + roman[i];
            num = num - nums[i];
            cout<<ans<<" ";
        }
    }

    return ans;
}

int main(){
    int num = 1994;

    cout<<endl<<"Roman: "<<intTORoman(num);
    return 0;
}