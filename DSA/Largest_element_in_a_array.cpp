#include<bits/stdc++.h>
#include<vector>
using namespace std;

int largestElement(vector<int> arr) {
    int largest=INT_MIN;
    for(int i=0;i<arr.size();i++){
        largest=max(largest,arr[i]);
    }
    return largest;
}
