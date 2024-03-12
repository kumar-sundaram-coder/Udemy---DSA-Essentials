// Method - 1 | Linear Search
class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        for (auto ele : letters)
        {
            if (ele > target)
                return ele;
        }
        return letters[0];
    }
};

// Method - 2 | Binary Search
class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        int start = 0;
        int end = letters.size() - 1;
        char ans = letters[0];

        while (start <= end)
        {
            int mid = (start + end) / 2;
            if (letters[mid] > target)
            {
                ans = letters[mid];
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return ans;
    }
};