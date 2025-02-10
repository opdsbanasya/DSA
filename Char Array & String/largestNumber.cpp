#include<bits/stdc++.h>

using namespace std;

static bool myComp(string a, string b){
    string t1 = a+b;
    string t2 = b+a;
    return t1 > t2;
}

string largestNumber(vector<int> nums){
    vector<string> snums;
    for(auto str: nums){
        snums.push_back(to_string(str));
    }

    sort(snums.begin(), snums.end(), myComp);
    if(snums[0] == "0") return "0";

    string ans = "";
    for(auto s:snums){
        ans += s;
    }

    return ans;
}

int main(){
    vector<int> nums = {12, 8, 6, 30, 3};

    cout<<"The largest number is: "<<largestNumber(nums)<<endl;
    return 0;
}