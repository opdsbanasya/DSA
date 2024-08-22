#include <iostream>
#include <vector>
#include <set>

using namespace std;
vector<int> commonElems(vector<int> arr1, vector<int> arr2, vector<int> arr3){
    vector<int> ans;
    set<int> st;
    int i, j, k;
    i = j = k = 0;
    while (i < arr1.size() && j < arr2.size() && k < arr3.size()){
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k]){
            st.insert(arr1[i]);
            i++, k++, j++;
        }
        else if (arr1[i] < arr2[j]){
            i++;
        }
        else if (arr2[j] < arr3[k]){
            j++;
        }
        else{
            k++;
        }
    }
    for (auto i : st){
        ans.push_back(i);
    }
    return ans; 
}
int main()
{
    // int a[] = {1, 5, 10, 20, 40, 80};
    // int b[] = {6, 7, 20, 80, 100};
    // int c[] = {3, 4, 15, 20, 30, 70, 80, 100};
    vector<int> arr1{3, 3, 3};
    vector<int> arr2{3, 3, 3};
    vector<int> arr3{3, 3, 3};

    vector<int> ans = commonElems(arr1, arr2, arr3);

    cout << "All  Elements" << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}