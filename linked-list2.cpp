#include<iostream>
#include"Node2.cpp"
using namespace std;

Node *takeInputbetter(){
    int data;
    cin>>data;
    Node *head= NULL;
    Node *tail= NULL;
    while(data != -1){
        Node *newnode= new Node(data);
        if(head==NULL){
            head=newnode;
            tail= newnode;
        }
        else{
            tail->next = newnode;
            tail= newnode;
        }
        cin>>data;
    }
    return head;
}

void print(Node *head){
    while(head != NULL){
        cout<<head->data<<endl;
        head= head->next;
    }
}
int main(){
    Node *head= takeInputbetter();
    print(head);
    return 0;
}