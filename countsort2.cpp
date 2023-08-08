#include <bits/stdc++.h>
using namespace std;

vector<int> countingSort(vector<int> arr) {
    int max = *max_element(arr.begin(), arr.end()) + 1;

    vector<int> count(max, 0);
    for(int i=0;i<arr.size();i++){
        count[arr[i]]++;
    }
    vector<int> final;
    for(int i=0;i<max;i++){
        for(int j=0;j<count[i];j++){
            final.push_back(i);
        }
    }
    return final;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> final = countingSort(arr);
    for(int i:final){
        cout<<i<<" ";
    }
}