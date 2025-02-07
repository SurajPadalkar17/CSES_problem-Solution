#include <bits/stdc++.h>
using namespace std;

long long MaxSum(vector<int>& nums) {
    long long maxsum = LLONG_MIN;  
    long long sum = 0;
    long long n = nums.size();
    
    for (long long num : nums) {      
        sum += num;
        maxsum = max(sum, maxsum);
        if (sum < 0) {  
            sum = 0;  
        }
    }
    
    return maxsum;  
}

int main() {        
    long long n; 
    cin >> n;
    vector<int> nums(n);
    
    for (long long i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    cout << MaxSum(nums) << endl;
    return 0;
}
