/*
  Hint 1: Scan the array and compute Maximum, second maximum, third maximum element, and minimum and second minimum element present in the array.

Hint 2: The answer will always be maximum of product of Maximum, second maximum and third maximum and product of Minimum, second minimum and Maximum element.
  */

class Solution
{
public:
  int maximumProduct(vector<int> &nums)
  {
    sort(nums.begin(), nums.end());
    int n = nums.size();

    int productOne = nums[n - 1] * nums[n - 2] * nums[n - 3];

    int productTwo = INT_MIN;
    if (nums[0] < 0 && nums[1] < 0)
    {
      productTwo = nums[0] * nums[1] * nums[n - 1];
    }
    else
    {
      return productOne;
    }
    return max(productOne, productTwo);
  }
};