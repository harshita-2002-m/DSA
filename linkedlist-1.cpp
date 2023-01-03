#include<iostream>
#include"Node2.cpp"
using namespace std;

Node *takeinput(){
    int data;
    cin>>data;
    Node *head=NULL;
    while(data != -1){
        Node *newnode = new Node(data);
        if(head==NULL){
            head= newnode;
        }
        else{
            Node *temp= head;
            while(temp -> next != NULL){
                temp= temp->next; 
            }
            temp->next = newnode;
        }
        cin>>data;
    }
    return head;
}

void print(Node *head){
    while(head!=NULL){
        cout<< head->data <<" "<<endl;
        head = head->next;
    }
}
int main(){
    Node *head= takeinput();
    print(head);
    return 0;
}