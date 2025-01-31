#include <bits/stdc++.h>
using namespace std;

void solution(long long n)
{
    long long c = n;
    cout << n << " ";
    while (c > 1)
    {
        // even case
        if (c % 2 == 0)
        {
            c = c / 2;
        }
        else // odd case
        {
            c = (c * 3) + 1;
        }
        cout << c << " ";
    }
}

int main()
{
    long long n;
    cin >> n;
    solution(n);
    return 0;
}