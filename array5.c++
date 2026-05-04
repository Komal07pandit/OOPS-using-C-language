#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int idx=0;

        for(int x:nums){
            if(x!=0) nums[idx++] = x;
        }
        while(idx<nums.size()) nums[idx++] = 0;
    }
};

int main(){
    vector<int> nums = {0,1,0,3,12};
    Solution obj;
    obj.moveZeroes(nums);

    for(int x:nums) cout<<x<<" ";
}