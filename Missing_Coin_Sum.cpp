#include<bits/stdc++.h>
  
using namespace std;

long long SmallSUm(vector<int>& nums){
    sort(nums.begin(),nums.end());
    long long smallSum = 1;
    for(int num : nums){        
        if(num > smallSum ){
            break;
        }
       smallSum = smallSum + num;
    }      
    return smallSum;  
}
   
int main(){  
    int n ; cin>>n;
    vector<int>nums(n);
    for(int i =0;i<n;i++){
        cin>>nums[i];
    }
    cout<<SmallSUm(nums);
return 0;
}