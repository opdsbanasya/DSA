#include <iostream>
#include <vector>

using namespace std;
void spiralPrint(vector<vector<int> > matrix){
    vector<int> ans;
    int m = matrix.size();
    int n = matrix[0].size();
    int totalElems = m*n;

    int startingRow = 0;
    int endingCol = n-1;
    int endingRow = m-1;
    int startingCol = 0;

    int count  = 0;

    while(count<totalElems){
        for(int i=startingCol; i<=endingCol && count<totalElems; i++){
            ans.push_back(matrix[startingRow][i]);
            count++;
        }
        startingRow++;
        for(int i=startingRow; i<=endingRow && count<totalElems; i++){
            ans.push_back(matrix[i][endingCol]);
            count++;
        }
        endingCol--;
        for(int i=endingCol; i>=startingCol && count<totalElems; i--){
            ans.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--;
        for(int i=endingRow; i>=startingRow && count<totalElems; i--){
            ans.push_back(matrix[i][startingCol]);
            count++;
        }
        startingCol++;
    }

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}
int main()
{
    vector<vector<int> > arr{
        {1, 2, 3, 4}, 
        {5, 6, 7, 8}, 
        {9, 10, 11, 12}, 
        {13, 14, 15, 16}
    };

    spiralPrint(arr);

    return 0;
}