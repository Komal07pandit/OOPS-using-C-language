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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* tail = &dummy;

        while(l1 && l2) {
            if(l1->val < l2->val) {
                tail->next = l1;
                l1 = l1->next;
            } else {
                tail->next = l2;
                l2 = l2->next;
            }
            tail = tail->next;
        }

        if(l1) tail->next = l1;
        else tail->next = l2;

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
    ListNode* a = new ListNode(1);
    a->next = new ListNode(3);

    ListNode* b = new ListNode(2);
    b->next = new ListNode(4);

    Solution obj;
    ListNode* res = obj.mergeTwoLists(a, b);
    obj.print(res);
}