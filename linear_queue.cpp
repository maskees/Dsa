#include <iostream>
using namespace std;
int const n=10;
int q[n];
void printing(int front,int rear){
    int i;
    if(front==-1){
        cout<<"the queue has gone underflow "<<endl;
        return;
    }
    
    for(int i=front;i<=rear;i++){
        cout<<q[i]<<" ";
    }
    cout<<endl;
}
void dequeue(int& front,int& rear){
    if(front==-1){
        cout<<"underflow"<<","<<endl;

    }
    else{
        if(front==rear){
            front=rear=-1;
        }
        else{
            front+=1;
        }
    }
}
void enqueue(int& front,int& rear){
    int a;
    if(rear==n-1){
        cout<<"overflow";
    }
    else{
cout<<"enter the element you want to enter(integer only ) ";
cin>>a;
if (front==-1){
    front=rear=0;
    q[rear]=a;
}
else{
rear=rear+1;
q[rear]=a;
}

}
}
int main(){   
    int front=-1;
    int a;
int rear=-1;

    while(a!=3){
    cout<<"enter the choice: enter 1 for enqueue, enter 2 for dequeue, enter 3 to end ";
    cin>>a;
    switch (a)
    {
    case 1 /* constant-expression */:
        /* code */
        enqueue(front,rear);
        printing(front,rear);
        break;
    case 2:
    dequeue(front,rear);
    printing(front,rear);
    break;
    case 3:
    cout<<"the process ends";
    break;

    default:
    cout<<"please enter a valid number"<<endl;
        break;
    }}
return 0;
}