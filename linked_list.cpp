#include <iostream>
#include <string>
using namespace std;
class node{
public:
int data;
node *next;

node(int val){
    data=val;
    next=NULL;
}};
void delathead(node* &head);
void delel(node* &head,int pos){
    if(pos==1){
    delathead(head);
    return;
    }
    node* temp=head;
    node *temp2=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    node *prev=temp;
     
    for(int i=0;i<pos-1;i++){
        temp2=temp2->next;
    }
    prev->next=temp2->next;
};
void insertathead(node* &head,int val){
    node* new_node=new node(val);
    new_node->next=head;
    head=new_node;
}
void display(node* head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"Null";
}
void insertatend(node* &head,int val){
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    node *last_node=new node(val);
    temp->next=last_node;
}
void insertatk(node* &head,int k,int val){
    if(k==0){
        insertathead(head,val);
        return;
    }
    node *temp=head;
    for(int i=1;i<k-1;i++){
        temp=temp->next;
    }
    node *k_node=new node(val);
    k_node->next=temp->next;
    temp->next=k_node;
}
void update(node* &head,int val,int k){
    node *temp=head;
    for(int i=0;i<k-1;i++){
        temp=temp->next;
    }
    temp->data=val;
}
void delathead(node* &head){
    node *temp=head;
    head=temp->next;
}
void delatend(node* &head){
    node* temp=head;
    node* temp2=head;
    while(temp->next!=NULL){
        temp=temp->next;

    }
    while(temp2->next!=temp){
        temp2=temp2->next;

    }
    temp2->next=NULL;

}
int main(){
node* head=new node(10);
insertathead(head,2);
insertatend(head,9);
insertatk(head,2,6);
update(head,8,3);
delatend(head);
delathead(head);
delel(head,2);
display(head);
return 0;
}