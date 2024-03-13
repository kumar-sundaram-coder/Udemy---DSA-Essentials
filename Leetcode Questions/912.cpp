class Solution
{
public:
    void merge(vector<int> &nums, int s, int mid, int e)
    {
        vector<int> temp;
        int i = s;
        int j = mid + 1;

        while (i <= mid && j <= e)
        {
            if (nums[i] < nums[j])
            {
                temp.push_back(nums[i]);
                i++;
            }
            else
            {
                temp.push_back(nums[j]);
                j++;
            }
        }
        while (i <= mid)
        {
            temp.push_back(nums[i]);
            i++;
        }
        while (j <= e)
        {
            temp.push_back(nums[j]);
            j++;
        }

        int k = 0;
        for (int idx = s; idx <= e; idx++)
        {
            nums[idx] = temp[k];
            k++;
        }
    }

    void mergeSort(vector<int> &nums, int s, int e)
    {
        // Base case
        if (s >= e)
            return;

        // recursive case
        int mid = (s + e) / 2;
        mergeSort(nums, s, mid);
        mergeSort(nums, mid + 1, e);
        merge(nums, s, mid, e);
    }

    vector<int> sortArray(vector<int> &nums)
    {
        int s = 0;
        int e = nums.size() - 1;
        mergeSort(nums, s, e);
        return nums;
    }
};