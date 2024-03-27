// Method - 1 | Using Two pointers

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {

        int n = prices.size();
        if (n < 2)
            return 0;

        int i = 0;
        int j = 1;
        int ans = 0;

        while (j < n)
        {
            if (prices[j] > prices[i])
            {
                ans = max(ans, prices[j] - prices[i]);
            }
            else
            {
                i = j;
            }
            j++;
        }
        return ans;
    }
};

// Method - 2 | Similar to using two pointer but here, we keep track of min_element and would change its value whenever we encounter any element whose value is lesser than min_ele and we would calculate, compare and change our ans, whenever we find any element bigger than min_ele

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {

        int n = prices.size();
        if (n < 2)
            return 0;
        int min_ele = INT_MAX;
        int ans = 0;

        for (int ele : prices)
        {
            if (ele < min_ele)
            {
                min_ele = ele;
            }
            else if (ele - min_ele > ans)
            {
                ans = ele - min_ele;
            }
        }
        return ans;
    }
};