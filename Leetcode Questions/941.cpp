// Method - 1 | bascially reaching the pivot index from front and back, and if we reach on the same idx then there is only a single pivot point in the array thus its a valid mountain array!

class Solution
{
public:
    bool validMountainArray(vector<int> &arr)
    {
        if (arr.size() < 3)
            return false;

        int i = 0;
        int n = arr.size();
        int j = n - 1;

        while (i < n - 1 && arr[i] < arr[i + 1])
            i++;

        while (j > 0 && arr[j] < arr[j - 1])
            j--;

        return i != 0 && j != n - 1 && i == j;
    }
};

// Method -2 | Using a bool flag!

class Solution
{
public:
    bool validMountainArray(vector<int> &arr)
    {
        if (arr.size() < 3)
            return false;
            
        if (arr[0] > arr[1])
            return false;

        int n = arr.size();
        bool flag = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == arr[i + 1])
                return false;

            if (flag)
            {
                if (arr[i] > arr[i + 1])
                    flag = false;
            }
            else
            {
                if (arr[i] < arr[i + 1])
                    return false;
            }
        }
        return !flag;
    }
};
