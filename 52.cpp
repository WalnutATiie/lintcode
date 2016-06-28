/*
 * =====================================================================================
 *
 *       Filename:  52.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/28/16 12:37:42
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
class Solution {
public:
    /**
     * @param nums: An array of integers
     * @return: An array of integers that's next permuation
     */
    vector<int> nextPermutation(vector<int> &nums) {
        // write your code here
        int n = nums.size();
        for(int i=n-1 ;i>=0;i--)
        {
            for(int j=n-1;j>i;j--)
            {
                if(nums[i]<nums[j])
                {
                    swap(nums[i],nums[j]);
                    sort(nums.begin()+i+1,nums.end());
                    return nums;
                }
            }
        }
        reverse(nums.begin(),nums.end());
        return nums;
    }
};
