#include <bits/stdc++.h>
using namespace std;

// function to find the prefix sum array
vector<int> findPrefixSum(vector<int> &arr) {
    int n = arr.size();
    
    // to store the prefix sum
    vector<int> prefixSum(n);

    // initialize the first element
    prefixSum[0] = arr[0];

    // Adding present element with previous element
    for (int i = 1; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    
    return prefixSum;
}

int main() {
    vector<int> arr = {10, 20, 10, 5, 15};
    vector<int> prefixSum = findPrefixSum(arr);
    for(auto i:prefixSum) {
        cout<<i<<" ";
    }
    return 0;
}