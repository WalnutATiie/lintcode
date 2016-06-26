/*
 * =====================================================================================
 *
 *       Filename:  158.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/26/16 12:40:44
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
     * @param s: The first string
     * @param b: The second string
     * @return true or false
     */
    bool anagram(string s, string t) {
        vector<int> ascii(128, 0);
        for (string::size_type c_iter = 0; c_iter != s.size(); c_iter++) {
            ascii[int(s[c_iter])]++;
        }
        for(string::size_type c_iter = 0; c_iter != t.size(); c_iter++){
            if(-- ascii[int(t[c_iter])]  < 0){
                return false;
                exit(0);    
            }
        }
        return true;
    }
};
