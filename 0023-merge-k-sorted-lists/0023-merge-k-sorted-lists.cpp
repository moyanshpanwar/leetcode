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
    ListNode* merge(ListNode* list1, ListNode* list2){
        ListNode temporary;
        ListNode* node = &temporary;
        while(list1 && list2){
            if(list1->val<list2->val){
                node->next = list1;
                list1 = list1->next; 
            }
            else{
                node->next = list2;
                list2 = list2->next;
            }
            node = node->next;
        }
        node->next = list1 ? list1:list2;
        return temporary.next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()){
            return nullptr;
        }
        while(lists.size()>1){
            vector<ListNode*>temp;
            for(size_t i = 0; i<lists.size(); i+=2){
                ListNode* list1 = lists[i];
                if(i+1<lists.size()){
                    ListNode* list2 = lists[i + 1];
                    temp.push_back(merge(list1, list2));
                }
                else{
                    temp.push_back(list1);
                }
            }
            lists = move(temp);
        }
        return lists[0];
    }
};