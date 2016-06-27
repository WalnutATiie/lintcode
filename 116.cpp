/*
 * =====================================================================================
 *
 *       Filename:  116.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/26/16 16:58:25
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
     * @param A: A list of integers
     * @return: The boolean answer
     */
    
    bool canJump(vector<int> A) {
        // write you code here
        if(A.size()<=1)
            return true;

        if(A[0] ==0) return false;
        int maxJump = A[0];
        for(int i = 1;i<A.size() -1;i++){
            maxJump = max(maxJump - 1,A[i]);//maxJump表示当前位置可以向后走的最大步数
            if(maxJump == 0)
                return false;
        }
        return true;
    }
};

