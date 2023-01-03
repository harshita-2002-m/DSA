#include<iostream>
#include"Node.cpp.cpp"
using namespace std;

Node *takeinput_better(){
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head==NULL){
            head= newNode;
            tail= newNode;
        }
        else{
            tail->next= newNode;
            tail=tail->next;
        }
        cin>>data;
    }
    return head;
}

void print(Node *head){
    while(head != NULL){
        cout<<head->data <<endl;
        head= head->next;
    }
}
int main(){
    Node *head= takeinput_better();
    print(head);
    return 0;

}