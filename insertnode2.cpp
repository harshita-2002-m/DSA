#include<iostream>
using namespace std;
#include "Node.cpp.cpp"

Node *takeinput_better(){
    int data;
    cin>>data;
    Node *head= NULL;
    Node *tail= NULL;
    while(data != -1){
        Node *newnode=new Node(data);
        if(head==NULL){
            head= newnode;
            tail=newnode;
        }
        else{
            tail->next = newnode;
            tail= tail->next;
        }
        cin>>data;
    }
    return head;
}

Node *insert_node(Node *head, int i, int data){
    Node *newnode= new Node(data);
    int count=0;
    Node *temp = head;
    if(i==0){
        newnode->next = head;
        head= newnode;
        return head;
    }
    while(temp != NULL && count<i-1){
        temp= temp->next;
        count++;
    }
    if(temp != NULL){
        Node *a= temp->next;
        temp->next = newnode;
        newnode->next = a;
    }
    return head;
}

void print(Node *head){
    while(head != NULL){
        cout<< head->data <<endl;
        head= head->next;
    }
}
int main(){
    Node *head= takeinput_better();
    print(head);
    int i, data;
    cin>>i>>data;
    head= insert_node(head, i , data);
    print(head);
    return 0; 
}