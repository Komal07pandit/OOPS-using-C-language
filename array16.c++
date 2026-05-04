#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);

        int pre=1;
        for(int i=0;i<n;i++){
            ans[i]=pre;
            pre*=nums[i];
        }

        int suf=1;
        for(int i=n-1;i>=0;i--){
            ans[i]*=suf;
            suf*=nums[i];
        }
        return ans;
    }
};

int main() {
    vector<int> nums = {1,2,3,4};

    Solution obj;
    vector<int> ans = obj.productExceptSelf(nums);

    for(int x:ans) cout<<x<<" ";
}