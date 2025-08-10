/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* cur = dummy;
    dummy->next = NULL; //To prevent the situation that one of two lists is NULL 

    while(list1 != NULL && list2 != NULL) {
        if (list1->val <= list2->val) {
            cur->next = list1;
            cur = cur->next;
            list1 = list1->next;
        } else {
            cur->next = list2;
            cur = cur->next;
            list2 = list2->next;
        }
    }
    cur->next = (list1 == NULL) ? list2 : list1;

    return dummy->next;
}