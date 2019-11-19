SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* temp;
    SinglyLinkedListNode* new=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    new->data=data;
    new->next=NULL;
    temp=head;
    if(temp==NULL) //empty linked list case
    {
        head=new;
    }
    else
    while(temp!=NULL) // linked list exist 
    {
        
        if(temp->next==NULL)  
        {
           temp->next=new;
           break;
        }
        else 
           temp=temp->next;
    }
return head;
}   
