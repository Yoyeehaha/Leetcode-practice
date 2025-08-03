#include <stdio.h>
#include <stdlib.h>
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* temp = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* curr = temp;
    int carry = 0, sum;

    while (l1 != NULL||l2 != NULL||carry == 1) {
        sum = 0;
        if (l1 != NULL) {
            sum += l1->val;
            l1 = l1->next; 
        }

        if (l2 != NULL) {
            sum += l2->val;
            l2 = l2->next; 
        }

        sum += carry;
        carry = sum / 10;
        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->val = sum % 10;
        newNode->next = NULL; 
        curr->next = newNode;
        curr = curr->next;
    }
    return temp->next;

}