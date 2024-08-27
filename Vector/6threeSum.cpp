#include<iostream>
#include<vector>

using namespace std;

vector<vector<int> > threeSum(vector<int> arr, int key){
    vector<vector<int> > ans;
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            for(int k=j+1; k<arr.size(); k++){
                if(arr[i] + arr[j] + arr[k] == key){
                    ans.push_back(vector<int>({arr[i], arr[j], arr[k]}));
                }
            }
        }
    }

    return ans;
}

int main(){
    // int n;
    // cout<<"Enter size of vector"<<endl;
    // cin>>n;

    vector<int> arr{-1,0,1,2,-1,-4};

    // cout<<"Enter the elements"<<endl;
    // for(int i=0; i<arr.size();i++){
    //     cin>>arr[i];
    // }

    int key;
    cout<<"Enter sum key"<<endl;
    cin>>key;

    vector<vector<int> > ans = threeSum(arr, key);
    for(int i=0; i<ans[0].size(); i++){
        for(int j=0; j<ans.size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}