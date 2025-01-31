#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int s;
    vector<int> arr;
    
    for (int i = 0; i < n - 1; i++) {
        cin >> s;
        arr.push_back(s);
    }

    sort(arr.begin(), arr.end()); // Sort the given numbers

    int g = arr.size();
    for (int i = 0; i < g; i++) {  // Loop correctly from 0 to g-1
        if (arr[i] != i + 1) {  // Missing number check
            cout << i + 1 << endl;
            return 0;  // Exit after printing the missing number
        }
    }

    // If no number was missing in the sorted range, the missing number is 'n'
    cout << n << endl;

    return 0;
}
