#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    long long moves = 0; // To store the total number of moves
    for (int i = 1; i < n; i++)
    {
        if (nums[i] < nums[i - 1])
        {
            moves += nums[i - 1] - nums[i]; // Calculate the difference
            nums[i] = nums[i - 1];          // Increase current element to match previous one
        }
    }
    cout << moves << endl; // Output the minimum number of moves
    return 0;
}
