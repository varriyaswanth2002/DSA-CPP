#include<iostream>
using namespace std;
struct node{
    int val;
    struct node* next;
};
struct node* head = NULL;
struct node* addNode(int t){
    if(head == NULL){
        head=new node;
        head->val = t;
        head->next = NULL;
        return head;
    }
    //no need to write else since if is returnec always so it acts as else
    struct node* temp = head;
    while(temp->next != NULL) temp = temp->next;
    temp->next = new node;
    temp->next->val = t;
    temp->next->next = NULL;
    return temp->next;
}
int main(){
    addNode(1);
    addNode(2);
    addNode(3);
    struct node* first = addNode(4);
    addNode(5);
    addNode(6);
    addNode(7);
    struct node* second = addNode(8);
    second->next = first;
    struct node* slow = head, *fast = head;
    bool loopExist = false;
    while(slow && fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow == fast){
            loopExist = true;
            break;
        } 
    }
    cout<< (loopExist?"theres a cycle":"no cycle");
    return 0;
}