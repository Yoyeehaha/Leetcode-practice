/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    struct ListNode* start = NULL;
    struct ListNode* curr = head;
    struct ListNode* temp;
    int cnt = 0;

    if(!head || !head->next) return head;

    //To know how many nodes are there
    while(curr) {
        curr = curr->next;
        cnt++;
    }
    curr = head;
    k = k % cnt;

    //rotate
    for (int i = 0;i < k;i++) {
        while(curr->next) {
            temp = curr->next;
            start = curr;
            curr = curr->next;
        }
        curr->next = head;
        head = curr;
        start->next = NULL;
        start = NULL;
    }
    
    return head;
}