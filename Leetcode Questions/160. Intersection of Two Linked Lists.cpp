/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

#define value 1000000

class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode *tempA = headA;
        ListNode *tempB = headB;
        while (tempA != nullptr)
        {
            tempA->val = tempA->val - value;
            tempA = tempA->next;
        }

        while (tempB != nullptr)
        {
            if (tempB->val < 0)
            {
                break;
            }
            tempB = tempB->next;
        }
        tempA = headA;
        while (tempA != nullptr)
        {
            tempA->val = tempA->val + value;
            tempA = tempA->next;
        }
        ListNode *ans = nullptr;
        if (tempB != nullptr)
        {
            ans = tempB;
            return tempB;
        }
        return nullptr;
    }
};