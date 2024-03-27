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
class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {

        if (head == NULL)
        {
            return nullptr;
        }

        ListNode *newHead = new ListNode();
        newHead->next = head;
        ListNode *curr = head;
        ListNode *prev = newHead;
        ListNode *nxt = head;

        while (nxt != nullptr)
        {
            nxt = nxt->next;
            if (curr->val != val)
            {
                prev = curr;
                curr = nxt;
            }
            else
            {
                prev->next = nxt;
                curr->next = nullptr;
                curr = nxt;
            }
        }
        return newHead->next;
    }
}; /**
    * Definition for singly-linked list.
    * struct ListNode {
    *     int val;
    *     ListNode *next;
    *     ListNode() : val(0), next(nullptr) {}
    *     ListNode(int x) : val(x), next(nullptr) {}
    *     ListNode(int x, ListNode *next) : val(x), next(next) {}
    * };
    */
class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {

        if (head == NULL)
        {
            return nullptr;
        }

        ListNode *newHead = new ListNode();
        newHead->next = head;
        ListNode *curr = head;
        ListNode *prev = newHead;
        ListNode *nxt = head;

        while (nxt != nullptr)
        {
            nxt = nxt->next;
            if (curr->val != val)
            {
                prev = curr;
                curr = nxt;
            }
            else
            {
                prev->next = nxt;
                curr->next = nullptr;
                curr = nxt;
            }
        }
        return newHead->next;
    }
};