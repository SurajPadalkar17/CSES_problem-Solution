#include <bits/stdc++.h>

using namespace std;

long long CollectNo(vector<int> &nums)
{
    long long n = nums.size();
    vector<int> pos(n + 1);
    for (int i = 0; i < n; i++)
    {
        pos[nums[i]] = i;
    } 
    long long round  = 1;
    for(int i = 2; i <= n;i++){
        if(pos[i] < pos[i-1]){
            round++;
        }
    }
    return round;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << CollectNo(nums);
    return 0;
}