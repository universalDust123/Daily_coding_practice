/*LeetCode problem no. 206 Reverse Linked List
Question Link: https://leetcode.com/problems/reverse-linked-list/     */

//Your code goes here


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* prev=NULL;
        while(head!=NULL) {
            ListNode* node=new ListNode(head->val);
            node->next=prev;
            prev=node;
            head=head->next;
        }
        return prev;
    }
};
