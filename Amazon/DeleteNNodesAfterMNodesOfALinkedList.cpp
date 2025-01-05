
class Solution {
  public:
    Node* linkdelete(Node* head, int n, int m) {
        // code here
        if(m==0){
        while(head!=NULL && n>0){
            head=head->next;
            n--;
        }
        return head;
        }
        int b=n,c=m;
        Node* temp=head;
        while(temp!=NULL){
            b=n,c=m;
        while(temp!=NULL && c>1){
        temp=temp->next;
        c--;
        }
        if(temp==NULL)return head;
        Node* a=temp;
        while(a!=NULL && b>=0){
        a=a->next;
        b--;
        }
        if(a==NULL){
            temp->next=NULL;
            break;
        }
        temp->next=a;
        temp=a;
        }
        return head;
    }
};

