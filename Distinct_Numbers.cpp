#include <iostream>
#include <vector>
#include <set>
#include<algorithm> 

using namespace std;

// int DistinctNo(vector<int> &nums) {
//     set<int> s; // Declare an empty set
    
//     // Insert elements into the set using a loop
//     for (int i = 0; i < nums.size(); i++) {
//         s.insert(nums[i]);
//     }
    
//     return s.size(); // Return the number of distinct elements
// }
int Distinct(vector<int>& nums){
    int count = 1;
    sort(nums.begin(),nums.end());
    for(int i = 1;i<nums.size();i++){
        if(nums[i] != nums[i-1]){
            count++;
        }
    }
    return count;
}
 
int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    
    // Read input values into the vector
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // cout << DistinctNo(nums) << endl; // Output the distinct count
    cout<<Distinct(nums); 
    
    return 0;
}         
