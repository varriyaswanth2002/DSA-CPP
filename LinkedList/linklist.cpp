#include <iostream>
using namespace std;
struct Node{
    int val;
    Node* next;
};
struct Node* head;
void addList(int t){
    Node* temp=head;
    if(head==NULL){
        head = new Node;
        head->val = t;
        head->next = NULL;
    }
    else{
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new Node;
        temp->next->val = t;
        temp->next->next = NULL;
    }
}
void printList(){
    Node* temp=head;
    while(temp!=NULL){
        cout << temp->val << "->";
        temp = temp->next;
    }
}
int main(){
    int arr[]={5,4,3,2,1,2,3,4,5};
    for(int i=0;i<9;i++){
        addList(arr[i]);
    }
    printList();
    return 0;
}