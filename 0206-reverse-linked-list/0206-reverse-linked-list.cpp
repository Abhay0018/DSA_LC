class Solution {
public:
    ListNode* getNode(ListNode* head , int idx){
    ListNode* temp = head;
    for(int i=0;i<idx;i++){
        temp = temp->next;
    }
    return temp; 
    }
    ListNode* reverseList(ListNode* head) {
    ListNode* temp = head;
    int n = 0;
    while(temp){
        n++;
        temp = temp->next;
    }
    int i=0;
    int j=n-1;
    while(i<j){
        ListNode* left = getNode(head,i);
        ListNode* right = getNode(head,j);
        int t = left->val;
        left->val = right->val;
        right->val = t;
        i++;
        j--;
    }
    return head;
    }

    //     if(head==NULL) return NULL;
    //     ListNode* prev = NULL;
    //     ListNode* curr = head;
    //     while(curr != NULL){
    //         ListNode* fwrd = curr -> next;
    //         curr -> next = prev;
    //         prev  = curr;
    //         curr = fwrd;
    //     }
    //     return prev;
    // }
};