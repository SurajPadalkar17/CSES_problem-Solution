#include <bits/stdc++.h>
using namespace std;

int playlist(vector<int> &nums) {
    unordered_map<int, int> freq; // Stores frequency of elements
    int i = 0, j = 0, maxlen = 0;

    while (j < nums.size()) {
        freq[nums[j]]++; // Increment frequency of current element

        // If there is a duplicate, remove elements from the left
        while (freq[nums[j]] > 1) {
            freq[nums[i]]--; // Reduce frequency of the leftmost element
            if (freq[nums[i]] == 0) freq.erase(nums[i]); // Erase if count becomes zero
            i++; // Move left boundary forward
        } 

        maxlen = max(maxlen, j - i + 1);
        j++;
    }
    return maxlen;
}

int main() {
    ios::sync_with_stdio(false); //  Speeds up input/output
    cin.tie(0); 

    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << playlist(nums) << '\n'; //  Using '\n' instead of `endl` to avoid flush overhead

    return 0;
}
