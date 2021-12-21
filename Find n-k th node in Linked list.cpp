int fractional_node(struct Node *head, int k)
{
    // your code here
    int n = 0;
    Node* tmp = head;
    while(tmp)
    {
        n++;
        tmp= tmp->next;
    }
    int no;
    if(n%k == 0)
    no = n/k;
    else
    
    no= n/k+1;
    tmp = head;
    int i = 1;
    while(i<no && tmp)
    {
        tmp = tmp->next;
        i++;
    }
    return tmp->data;
}