/*#include<iostream>
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

}*/

/*#include<iostream>
#include"Node.cpp.cpp"
using namespace std;
Node *takeinputBetter(){
    int data;
    cin>>data;
    Node *head= NULL;
    Node *tail= NULL;
    while(data != -1){
        Node *newnode = new Node(data);
        if(head==NULL){
            head= newnode;
            tail= newnode;
        }
        else{
            tail->next = newnode;
            tail= tail->next;
        }
        cin>>data;
    }
    return head;
}
void insertnode(Node *head, int i, int data){
    Node *newnode= new Node(data);
    int count=0;
    Node *temp=head;
    while(count<i-1){
        temp= temp->next;
        count++;
    }
    newnode->next = temp->next;
    temp->next = newnode;

}
void print(Node *head){
    while(head != NULL){
        cout<< head->data <<endl;
        head= head->next;
    }
}
int main(){
    Node *head= takeinputBetter();
    print(head);
    int i, data;
    cin>>i>>data;
    insertnode(head, i , data);
    print(head);
    return 0;
}
*/

/*#include<iostream>
#include"Node.cpp.cpp"
using namespace std;
Node *takeinputbetter(){
    int data;
    cin>>data;
    Node *head= NULL;
    Node *tail= NULL;
    while(data != -1){
        Node *newnode= new Node(data);
        if(head==NULL){
            head=newnode;
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
void insertnode(Node *head, int i, int data){
    Node *newnode= new Node(data);
    int count=0;
    Node *temp= head;
    while(temp != NULL && count<i-1){
        temp= temp->next;
        count++;    
    }
    if(temp != NULL){
        newnode->next = temp->next;
        temp->next = newnode;
    }
}
void print(Node *head){
    while(head != NULL){
        cout<< head->data <<endl;
        head= head->next;
    }
}
int main(){
    Node *head= takeinputbetter();
    print(head);
    int i,data;
    cin>>i>>data;
    insertnode(head,i,data);
    print(head);
    return 0;
}
*/
/*#include<iostream>
#include"Node.cpp.cpp"
using namespace std;

Node *input(){
    int data;
    cin>>data;
    Node *head= NULL;
    Node *tail= NULL;
    while(data != -1){
        Node *newnode= new Node(data);
        if(head==NULL){
            head= newnode;
            tail=newnode;
        }
        else{
            tail->next = newnode;
            tail = tail->next;
        }
        cin>>data;
       
    }
    return head;
}
Node *insertnode(Node *head, int i, int data){
    Node *newnode= new Node(data);
    int count=0;
    Node *temp=head;

    if(i==0){
        newnode->next=head;
        head=newnode;
        return head;
    }
    while(temp!= NULL && count<i-1){
        temp= temp->next;
        count++;
    }
    if(temp!=NULL){
        newnode-> next= temp->next;
        temp->next= newnode;
    }
    return head;
}
void print(Node *head){
    while(head != NULL){
        cout<< head->data<<endl;
        head= head->next;
    }
}
int main(){
    Node *head= input();
    print(head);
    int i,data;
    cin>>i>>data;
    head= insertnode(head,i,data);
    print(head);
    return 0;
}*/

#include<iostream>
#include"Node.cpp.cpp"
using namespace std;
Node *input(){
    int data;
    cin>>data;
    Node *head= NULL;
    Node *tail= NULL;
    while(data != -1){
        Node *newnode= new Node(data);
        if(head==NULL){
            head= newnode;
            tail= newnode;
        }
        else{
            tail-> next = newnode;
            tail= tail->next;
        }
        cin>>data;
    }
    return head;
}

Node *insert(Node *head,int i, int data){
    Node *newnode= new Node(data);
    int count=0;
    while(      )
}