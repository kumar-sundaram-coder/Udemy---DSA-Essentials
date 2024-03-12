// Brute force, slow
class Solution
{
public:
    void preProcess(unordered_map<int, int> &mp, vector<int> nums2)
    {
        int n = nums2.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (nums2[j] > nums2[i])
                {
                    mp.insert({nums2[i], nums2[j]});
                    continue;
                }
            }
        }
    }

    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> mp;
        preProcess(mp, nums2);

        vector<int> ans;
        int n = nums1.size();
        for (int i = 0; i < n; i++)
        {
            int ansEle = mp[nums1[i]];
            ans.push_back(ansEle == 0 ? -1 : ansEle);
        }

        return ans;
    }
};

// Optimized solution, using stack

class Solution
{
public:
    void preProcess(unordered_map<int, int> &mp, vector<int> nums2)
    {
        int n = nums2.size();
        stack<int> stackk;
        for (auto ele : nums2)
        {
            while (!stackk.empty() && ele > stackk.top())
            {
                mp[stackk.top()] = ele;
                stackk.pop();
            }
            stackk.push(ele);
        }
    }

    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> mp;
        preProcess(mp, nums2);

        vector<int> ans;
        for (int num : nums1)
        {
            ans.push_back(mp.count(num) ? mp[num] : -1);
        }

        return ans;
    }
};