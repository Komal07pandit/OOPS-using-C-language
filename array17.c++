#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total=0,left=0;

        for(int x:nums) total+=x;

        for(int i=0;i<nums.size();i++){
            if(left == total-left-nums[i])
                return i;
            left += nums[i];
        }
        return -1;
    }
};

int main() {
    vector<int> nums = {1,7,3,6,5,6};

    Solution obj;
    cout<<obj.pivotIndex(nums);
}