#include<iostream>
using namespace std;
struct node{
    int val;
    node* next;
};
node* head;
struct node* reverseList(struct node* head){
    node* curr = head;
    node* prev = NULL;
    node* next = NULL;
    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    
    for(int i=0;i<9;i++){
        if(head==NULL){
            head = new node;
            head->val = arr[i];
            head->next = NULL;
        }
        else{
            node *temp = head;
            while(temp->next != NULL) temp = temp->next;
            temp->next = new node;
            temp->next->val = arr[i];
            temp->next->next = NULL;
        }
    }
    //printing linked list
    node* t=head;
    while(t!=NULL){
         cout<<t->val<<"->";
         t=t->next;
    }
    //reverssing list
    struct node* t1 = reverseList(head);
    cout<<"Reverse linked list:"<<endl;
    while(t1!=NULL){
        cout<<t1->val<< "->";
        t1 = t1->next;
    }
    return 1;
}