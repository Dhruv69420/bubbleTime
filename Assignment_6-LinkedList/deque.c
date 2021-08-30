#include <stdio.h>
#include<stdlib.h>
struct toad{
    int val;
    struct toad* next;
};
struct toad* head;
struct toad* temp;
int enqueueBack(int val){
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    new_node->val = val;
    new_node->next = head;
    head = new_node;   
}
int is_Empty(){
    if(head==NULL)
      return 1;
    else 
      return 0;
}
int dequeueFront(){
    if(is_Empty()){
       printf("Queue is Empty");
    }
    else{
        int x=head->val;
        head=head->next;
        return x;
    }
}
int peek(){
    if(!is_Empty()){
        return head->val;
    }
    else{
        printf("Stack is Empty");
    }
}
void enqueueFront(int val){
    struct toad* new = (struct toad*)malloc(sizeof(struct toad));
    new->val=val;
    new->next=head;
    head=new;
}

int main()
{
    head = (struct toad*)malloc(sizeof(struct toad));
    temp = (struct toad*)malloc(sizeof(struct toad));
    enqueueBack(1);
    enqueueBack(2);
    enqueueBack(3);
    enqueueFront(9);
    dequeueFront();
    dequeueFront();
    enqueueBack(6);
    dequeueLast();
    dequeueFront();
    printf("%d",peek());   
    
    
    

    return 0;
}
