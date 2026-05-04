#include <iostream>
#include <vector>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> arr;
        while(head) {
            arr.push_back(head->val);
            head = head->next;
        }

        int i = 0, j = arr.size()-1;
        while(i < j) {
            if(arr[i] != arr[j]) return false;
            i++; j--;
        }
        return true;
    }
};

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(1);

    Solution obj;
    cout << obj.isPalindrome(head);
}