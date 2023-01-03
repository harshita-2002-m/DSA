#include<iostream>
using namespace std;
#include "Node.cpp.cpp"
/*void print(Node *head){
    /*Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    while(head != NULL){
        cout<<head ->data<<" ";
        head= head->next;
    }
}
int main(){
    //Statically
    Node n1(1);
    Node *head= &n1;
    Node n2(2);
    n1.next= &n2;
    cout<<n1.data<<" "<<n2.data<<endl;
    cout<<head-> data;
//Dynamically
    
    Node *n3= new Node(10);
    Node *head= n3;
    Node *n4= new Node(20);
    n3 -> next = n4;
    //cout<<n3.data<<" "<<n4.data<<endl;
    cout<<head -> data;
    Node n1(1);
    Node *head= &n1;
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);
    n1.next= &n2;
    n2.next= &n3;
    n3.next= &n4;
    n4.next= &n5;
    print(head);
    print(head);
}*/



void print(Node *head){
    Node *temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){

    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(200);
    Node *node4 = new Node(2000);
    node1 -> next = node2;
    node2 -> next = node3;
    node3 -> next = node4;
    print(node2);
}