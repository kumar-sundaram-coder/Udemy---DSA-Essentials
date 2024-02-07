#include <bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A)
{

    //   Brute force Solution
    /*
        int maxSum=INT_MIN;
        for(int i=0;i<A.size();i++){
            for(int j=i;j<A.size();j++){
             int currSum=0;
             for(int k=i;k<=j;k++){
                 currSum+=A[k];
             }
             maxSum=max(maxSum,currSum);
             }
        }
        return maxSum;
        */

    // Prefix Sum Soln
    /*
    // prefix sum arr
    vector<int> prefixSum(A.size());
    prefixSum[0]=A[0];
    for(int i=1;i<A.size();i++){
    prefixSum[i]=prefixSum[i-1]+A[i];
    }

    int maxSum=INT_MIN;

    for(int i=0;i<A.size();i++){
        for(int j=i;j<A.size();j++){
        int currSum = i>0? prefixSum[j] - prefixSum[i-1] : prefixSum[j];

        maxSum=max(maxSum,currSum);

        }

    }
        return maxSum;
        */

    // Kadane's Algo + Special case handling

    int allNegFlag = true;
    int largestElement = INT_MIN;

    //  check if all are negative in the array if yes, then this is the special case and normal kadane fails for this if not handled seperately

    for (int val : A)
    {
        if (val >= 0)
        {
            allNegFlag = false;
        }
        largestElement = max(largestElement, val);
    }

    if (allNegFlag == true)
    {
        return largestElement;
    }

    // if it reaches here, then it means not a special case and normal kadane can handle this easily

    int maxSum = INT_MIN;
    int currSum = 0;

    for (int i = 0; i < A.size(); i++)
    {
        currSum += A[i];
        if (currSum < 0)
            currSum = 0;

        maxSum = max(maxSum, currSum);
    }

    return maxSum;
}