/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        //meth1
        // node->val= node->next->val;
        // node->next= node->next->next;


        //meth2
        *node = *node->next;
        
    }

};