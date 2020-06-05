struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {        
        if (not (l1 or l2)) {
            return nullptr;
        }
        else if (not l1) {
            return l2;
        }
        else if(not l2) {
            return l1;
        }

        ListNode* result = nullptr;
        
        if (l1->val <= l2->val) {
            result = l1;
            l1 = l1->next;
        }
        else {
            result = l2;
            l2 = l2->next;
        }
        
        ListNode* iter = result;
        
        while (l1 and l2) {
            if (l1->val <= l2->val) {
                iter->next = l1;
                l1 = l1->next;
            }
            else {
                iter->next = l2;
                l2 = l2->next;
            }
            iter = iter->next;
        }
        
        while (l1) {
            iter->next = l1;
            l1 = l1->next;
            iter = iter->next;
        }
        
        while (l2) {
            iter->next = l2;
            l2 = l2->next;
            iter = iter->next;
        }
        
        return result;
    }
};