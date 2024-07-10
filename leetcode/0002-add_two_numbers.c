#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    
    int carry = 0;          // Carry Flag
    struct ListNode* curr = (struct ListNode*) malloc(sizeof(struct ListNode));
    struct ListNode* ret = curr;             // First element of linked list

    while (l1 || l2 || carry) {

        if (curr->next == NULL) {
            curr->next = (struct ListNode*) malloc(sizeof(struct ListNode));
            curr = curr->next;
        }

        int v = (l1 != NULL ? l1->val : 0)
                + (l2 != NULL ? l2->val : 0)
                + carry;
        carry = (v >= 10) ? 1 : 0;
        v %= 10;

        curr->val = v;
        curr->next = NULL;

        l1 = l1 ? l1->next : NULL;
        l2 = l2 ? l2->next : NULL;
    }

    return ret;
}
