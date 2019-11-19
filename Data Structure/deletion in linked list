SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    SinglyLinkedListNode* temp=head;
    SinglyLinkedListNode* post=temp->next;
    int i,pos=position;
    if(pos==0)
    {
        head=temp->next;
        free(temp);
    }
    else{
        for(i=0;i<=pos;i++)
        {
           if(i==pos-1)
           {
               temp->next=post->next;
               free(post);
           }
           else {
              post=post->next;
              temp=temp->next;
           }
        }
    }
   return head;

}
