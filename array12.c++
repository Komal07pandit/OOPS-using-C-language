#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> freq(nums.size()+1,0);
        int dup=-1, miss=-1;

        for(int x:nums) freq[x]++;

        for(int i=1;i<=nums.size();i++){
            if(freq[i]==2) dup=i;
            if(freq[i]==0) miss=i;
        }
        return {dup,miss};
    }
};

int main() {
    vector<int> nums = {1,2,2,4};

    Solution obj;
    vector<int> ans = obj.findErrorNums(nums);

    cout<<ans[0]<<" "<<ans[1];
}