#include<bits/stdc++.h>

using namespace std;

int stringCompression(vector<char> &chars){
    if(chars.size() == 1) return 1;

    int ans = 0, count = 1;
    int i = 1;
    char prev = chars[0];

    while(i < chars.size()){
        if(chars[i] == prev){
            count++;
        } else {
            chars[ans++] = prev;
            if(count > 1) {
                int start = ans;
                while(count){
                    chars[ans++] = (count % 10) +'0';
                    count /= 10;
                }
                reverse(chars.begin() + start, chars.begin() + ans);
            }
            prev = chars[i];
            count = 1;
        }
        i++;
    }

    chars[ans++] = prev;
    if(count > 1){
        int start = ans;
        while(count){
            chars[ans++] = (count % 10) + '0';
            count /= 10;
        }
        reverse(chars.begin() + start, chars.begin() + ans);
    }

    return ans; 
}

int main(){
    vector<char> chars = {'a', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c'};
    // vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};

    int len  = stringCompression(chars);

    for(int i = 0; i<len; i++){
        cout<<chars[i]<< " ";
    }
    return 0;
}