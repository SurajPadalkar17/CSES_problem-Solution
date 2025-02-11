#include <bits/stdc++.h>
using namespace std;

long long playlist(vector<int> &nums)
{
    long long i = 0;
    long long j = 0;
    long long maxlen = 0;
    long long n = nums.size();
    unordered_set<int> set;
    while (j < nums.size())
    {
        if (set.find(nums[j]) == set.end())
        {
            set.insert(nums[j]);
            maxlen = max(maxlen, j - i + 1);
            j++;
        }
        else
        {
            set.erase(nums[i]);
            i++;
        }
    }
    return maxlen;
}

int main()
{
    long long n;
    cin >> n;
    vector<long long> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << playlist(nums);

    return 0;
}