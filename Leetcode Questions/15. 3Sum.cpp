// Method - 1 | very slow due to multiple sorts

class Solution
{
public:
    vector<vector<int>> findTargetSum(vector<int> &arr)
    {
        int targetSum = 0;
        vector<vector<int>> ans;

        int n = arr.size();
        for (int i = 0; i < n - 1; i++)
        {
            int remainingTarget = targetSum - arr[i];
            int l = i + 1;
            int r = n - 1;
            while (l < r)
            {
                if (arr[l] + arr[r] == remainingTarget)
                {
                    ans.push_back({arr[i], arr[l], arr[r]});
                    l++;
                    r--;
                }
                else if (arr[l] + arr[r] < remainingTarget)
                {
                    l++;
                }
                else
                {
                    r--; // for case (arr[l]+arr[r]> remainingTarget)
                }
            }
        }
        // Sort the vector of vectors
        sort(ans.begin(), ans.end());

        // Remove duplicates
        ans.erase(unique(ans.begin(), ans.end()), ans.end());

        return ans;
    }
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        // sort the array
        sort(nums.begin(), nums.end());

        return findTargetSum(nums);
    }
};

// Method - 2 | Fast

class Solution
{
public:
    vector<vector<int>> findTargetSum(vector<int> &arr, int n)
    {
        int targetSum = 0;
        vector<vector<int>> ans;

        // sort the array
        sort(arr.begin(), arr.end());

        for (int i = 0; i < n - 1; i++)
        {

            int remainingTarget = targetSum - arr[i];
            int l = i + 1;
            int r = n - 1;

            while (l < r)
            {

                if (arr[l] + arr[r] == remainingTarget)
                {
                    vector<int> smallAns = {arr[i], arr[l], arr[r]};
                    ans.push_back(smallAns);
                    while (l < r && arr[l] == smallAns[1])
                        l++;
                    while (r > l && arr[r] == smallAns[2])
                        r--;
                }
                else if (arr[l] + arr[r] < remainingTarget)
                {
                    l++;
                }
                else
                {
                    r--; // for case (arr[l]+arr[r]> remainingTarget)
                }
            }

            while (i < n - 1 && arr[i] == arr[i + 1])
                i++;
        }

        return ans;
    }
    vector<vector<int>> threeSum(vector<int> &arr)
    {
        int n = arr.size();
        if (n < 3)
            return {};

        return findTargetSum(arr, n);
    }
};