#include<iostream>
#include "Node.cpp.cpp"
using namespace std;

Node *takeinput(){
    int data;
    cin>>data;
    Node * head= NULL;
    while(data != -1){
        Node *newNode= new Node(data);
        if(head==NULL){
            head=newNode;
        }
        else{
            Node *temp= head;
            while(temp -> next != NULL){
                temp= temp->next;
            }
            temp->next= newNode;
        }
        cin>>data;
    }
    return head;
}


void print(Node *head){
   // Node *temp= head;
    while(head != NULL){
        cout<<head->data<<endl;
        head=head->next;
    }
}
int main(){
    Node *head=takeinput();
    print(head);
    return 0;
}