#include <iostream>
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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* temp = &dummy;

        while(temp->next) {
            if(temp->next->val == val)
                temp->next = temp->next->next;
            else
                temp = temp->next;
        }
        return dummy.next;
    }

    void print(ListNode* head) {
        while(head) {
            cout << head->val << " ";
            head = head->next;
        }
    }
};

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(6);

    Solution obj;
    head = obj.removeElements(head, 6);
    obj.print(head);
}