#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long x, y;
    cin >> x>>y;
    long long ans;
    if (x == y)
    {
        ans = (x * x) - (x - 1);
        cout << ans << endl;
        return;
    }
    else if (x > y)
    {
        if (x % 2 == 0)
            ans = (x * x) - (y - 1);
        else
            ans = (x - 1) * (x - 1) + y;
        cout << ans << endl;
        return;
    }
    else
    {
        if (y % 2 == 1)
            ans = (y * y) - (x - 1);
        else
            ans = (y - 1) * (y - 1) + x;
        cout << ans << endl;
        return;
    }
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;

    return 0;
}