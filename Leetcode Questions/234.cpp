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
    ListNode *reverseLinkedList(ListNode *head)
    {
        // base case
        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode *prev = nullptr;
        ListNode *curr = head;
        ListNode *next = head;
        while (curr != nullptr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    bool isPalindrome(ListNode *head)
    {
        // find the middle node
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast != nullptr && fast->next != nullptr &&
               fast->next->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        // basically the slow pointer has the middle node, next we want to
        // reverse the linkedList after mid
        ListNode *secHead = reverseLinkedList(slow->next);
        slow->next = nullptr;

        while (head != nullptr && secHead != nullptr)
        {
            if (head->val != secHead->val)
            {
                return false;
            }
            head = head->next;
            secHead = secHead->next;
        }
        return true;
    }
};