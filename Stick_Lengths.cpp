#include<bits/stdc++.h>
using namespace std;

long long stick(vector<int>& nums){
    sort(nums.begin(),nums.end());
    int start = 0;
    long long end = nums.size() - 1;
    long long maxdiff = 0;
    long long mid = nums[nums.size()/2];
    while(start < nums.size()){
        int diff = abs(nums[start] - mid);
        maxdiff = maxdiff + diff;
        start++;
    }
    return maxdiff;
}
int main(){
    int n ; cin >>n;
    vector<int>nums(n);
    for(int i =0;i<n;i++){
        cin>>nums[i];
    }
    cout<<stick(nums);  

return 0;
}