#include <bits/stdc++.h>
using namespace std;

void solution(string s)
{
    int max_count = 1;
    int curr_count = 1;
    for(int i = 1;i<s.size();i++){
        if(s[i]==s[i-1]){
            curr_count++;
        }
        else{
            curr_count = 1;
        }
        max_count = max(max_count,curr_count);
    }
    cout<<max_count;
}

int main()
{
    string s;
    cin >> s; // Read input string
    solution(s);

    return 0;
}
