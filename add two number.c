struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *p=l1,*q=l2;
    struct ListNode *r=NULL,*t=NULL,*head=NULL;
    int carry=0,sum=0;
    while(p!=NULL || q!=NULL || carry==1)
    {
        sum=0;
        if(p!=NULL)
        {
            sum+=p->val;
            p=p->next;
        }
        if(q!=NULL)
        {
            sum+=q->val;
            q=q->next;
        }
        sum+=carry;
        carry=sum/10;
        r=(struct ListNode *)malloc(sizeof(struct ListNode));
        r->val=sum%10;
        r->next=NULL;
        if(t!=NULL)
        {
            t->next=r;
        }
        else
        {
            head=r;
        }
        t=r;
    }
    return head;
}
