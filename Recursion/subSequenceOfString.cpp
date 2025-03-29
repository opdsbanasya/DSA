#include<bits/stdc++.h>

using namespace std;

void subSequenceOfString(string& str, string outputStr, vector<string>& ans, int i){
	if(i>str.size()-1){
		ans.push_back(outputStr);
        return;
	}

    // exclude
	subSequenceOfString(str, outputStr, ans, i+1);

    // include
    outputStr.push_back(str[i]);
    subSequenceOfString(str, outputStr, ans, i+1);
}

int main(){
    string str = "ctrl";
    vector<string> ans;
    string outputStr = "";

    subSequenceOfString(str, outputStr, ans, 0);

    cout<<ans.size()<<endl;
    for(auto st: ans){
        cout<<st<<" ";
    }
    return 0;
}
