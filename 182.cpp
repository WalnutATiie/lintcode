/*
 * =====================================================================================
 *
 *       Filename:  182.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/26/16 16:22:12
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
     *@param A: A positive integer which has N digits, A is a string.
     *@param k: Remove k digits.
     *@return: A string
     */
    typedef vector<int>::iterator pointer;
    pointer min_num(vector<int> nums,pointer begin,pointer end)
    {
        auto min_flag = begin;
        for(auto iter = begin;iter!=end;iter++)
        {
            if(*min_flag>*iter)
                min_flag = iter;
        }
        return min_flag;
    }
    string DeleteDigits(string A, int k) {
        // wirte your code here
        stringstream stream;
        vector<int> nums(A.size());
        for(int i=0;i<nums.size();i++)
            nums[i]=(int)(A[i]-'0');
        pointer begin_iter = nums.begin();
        pointer end_iter = nums.end();
        string ans;
        for(int i=0;i<nums.size()-k;i++)
        {
            pointer min_iter = min_num(nums,begin_iter,end_iter);
            if( distance(min_iter,nums.end()) <nums.size()-k-i)
                {
                 end_iter = min_iter;
                 --i;
                }
            else{
                char temp = *min_iter+'0';
                ans+=temp;
                begin_iter = min_iter+1;
                end_iter = nums.end();
            }
        }
        while(*ans.begin()=='0')
            ans.erase(ans.begin());
        return ans;
    }
};

