// Method - 1 | Using extra space
// Time: O(N) and Space: O(N)

class Solution {
public:

    bool checkPalindrome(vector<int> vec, int n){
        int i=0, j=n-1;

        while(i<=j){
            if(vec[i]!=vec[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        vector<int> vec;
        while(temp!=nullptr){
            vec.push_back(temp->val);
            temp=temp->next;
        }
        return checkPalindrome(vec,vec.size());

        
    }
};

// Method - 2 | Without using any extra space
// Time: O(N) and Space: O(1)



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