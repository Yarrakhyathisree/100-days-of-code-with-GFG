class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
         Node * first=head;
        Node * evenstart=NULL;
        Node * oddstart=NULL;
        
        Node * evenend=NULL;
        Node * oddend=NULL;
        
        while(head!=NULL){
            if(head->data%2==0){
                if(evenstart==NULL){
                    evenstart=head;
                    evenend=head;
                }
                else{
                    evenend->next=head;
                    evenend=evenend->next;
                }
            }
            else{
                if(oddstart==NULL){
                    oddstart=head;
                    oddend=head;
                }
                else{
                    oddend->next=head;
                    oddend=oddend->next;
                }
            }
            
            head=head->next; 
        }
        
        if(oddstart==NULL || evenstart==NULL){
            return first;
        }
        
        evenend->next=oddstart;
        oddend->next=NULL;
        
        head=evenstart;
        return head;
    }
};