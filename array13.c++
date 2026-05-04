#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int idx = abs(nums[i]) - 1;
            if(nums[idx] > 0)
                nums[idx] = -nums[idx];
        }

        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i] > 0)
                ans.push_back(i+1);
        }
        return ans;
    }
};

int main() {
    vector<int> nums = {4,3,2,7,8,2,3,1};

    Solution obj;
    vector<int> ans = obj.findDisappearedNumbers(nums);

    for(int x:ans) cout<<x<<" ";
}