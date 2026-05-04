#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX, profit = 0;

        for(int p:prices){
            minPrice = min(minPrice,p);
            profit = max(profit,p-minPrice);
        }
        return profit;
    }
};

int main(){
    vector<int> prices = {7,1,5,3,6,4};
    Solution obj;
    cout<<obj.maxProfit(prices);
}