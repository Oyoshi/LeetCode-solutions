struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* iter1 = l1;
        ListNode* iter2 = l2;
        ListNode* res = new ListNode();
        ListNode* resIter = res;
        auto acc = 0;
        
        while (iter1 && iter2) {
            const auto sum = iter1->val + iter2->val + acc;
            resIter->next = new ListNode(sum%10);
            acc = sum/10;
            resIter = resIter->next;
            iter1 = iter1->next;
            iter2 = iter2->next;
        }
        
        while (iter1) {
            const auto sum = iter1->val + acc;
            resIter->next = new ListNode(sum%10);
            acc = sum/10;
            resIter = resIter->next;
            iter1 = iter1->next;
        }
        
        while (iter2) {
            const auto sum = iter2->val + acc;
            resIter->next = new ListNode(sum%10);
            acc = sum/10;
            resIter = resIter->next;
            iter2 = iter2->next;
        }
        
        if (acc > 0u) {
            resIter->next = new ListNode(acc);
        }
    
        return res->next;
    }
};
