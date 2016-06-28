
 tion of ListNode
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *         this->val = val;
 *         this->next = NULL;
 *     }
 * }
 */
class Solution {
public:
    /**
     * @param head: The first node of linked list.
     * @param n: An integer.
     * @return: The head of linked list.
     */
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        // write your code here
        ListNode *p = head;
        for(int i=0;i<n;i++)
            p=p->next;
        ListNode *q = head;
        if(NULL==p)
        {
            head = head->next;
            return head;
        }
        for(int i=0;p->next!=NULL;i++)
        {
            p=p->next;
            q=q->next;
        }
        q->next = q->next->next;
        return head;
    }
};


* =====================================================================================
 *
 *       Filename:  174.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/28/16 12:35:58
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

