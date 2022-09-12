#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A) {
    int maxSum=INT_MIN;
    int sum=0;
    for(int i=0;i<A.size();i++){
        for(int j=i;j<A.size();j++){
            sum=0;
            for(int k=i;k<=j;k++){
                sum=sum+A[k];
            }
            maxSum=max(maxSum,sum);
           
        }
    }
return maxSum;
}
