/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || head->next == nullptr || k==0){
            return head;
        }
        ListNode*ptr = head;
        int length = 1;
        while(ptr->next != nullptr){
            ptr = ptr->next;
            length++;
        }
        ListNode*tail = ptr;
        k = k % length;
        if(k == 0){
            return head;
        }
        int newtailpos = length - k - 1;
        ListNode*newtail = head;
        for(int i = 0; i<newtailpos; i++){
            newtail = newtail->next;
        }
        ListNode*newhead = newtail->next;
        newtail->next = nullptr;
        tail->next = head;
        return newhead;
    }
};