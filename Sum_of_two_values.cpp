#include <bits/stdc++.h>
using namespace std;

vector<int> sumofvalues(vector<pair<int, int>> &nums, int target) {
    int left = 0, right = nums.size() - 1;
    
    while (left < right) {
        int sum = nums[left].first + nums[right].first;
        
        if (sum == target) {
            return {nums[left].second + 1, nums[right].second + 1}; // Convert to 1-based indexing
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    
    return {};
}

int main() {
    int n, t;
    cin >> n >> t;
    
    vector<pair<int, int>> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i].first;
        nums[i].second = i; // Store original index
    }

    sort(nums.begin(), nums.end()); // Sort by value

    vector<int> result = sumofvalues(nums, t);
    if (!result.empty()) {
        cout << min(result[0], result[1]) << " " << max(result[0], result[1]) << endl;
    } else {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}
