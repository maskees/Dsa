#include <iostream>
using namespace std;
const int n = 10;
    int top=-1;
    int stack[n];
    void push(int x)
    {
        if(top==(n-1)){
            cout<<"stack overflow\n";

        }else{
        top++;
        stack[top]=x;
        cout<<"the element at the top is "<<stack[top]<<endl;
   }}
   void Top(){
    if(top==-1){
        cout<<"there is no element in stack\n";
        
    }
    else{
        cout<<stack[top];
    }}
    void pop(){
        if(top==-1){
            cout<<"there is no element in stack\n";
           
        }
        cout<<stack[top--];
        
    }
    void empty(){
      if(top==-1){
       cout<< "it is empty\n";
      }
      else{
        cout<<"not empty\n";
      }
    }
   

int main(){
int ch,a;

do{
    cout<<"enter the number for the operation you want to do:\n 1 for push\n 2 for pop\n 3 for top\n 4 for empty\n 5 for exit\n";
    cout<<"enter the choice ";
    cin>>ch;
    switch (ch){
        case 1://push elements
            cout<<"enter the element you want to push ";
            cin>>a;
            push(a);
            break; 
    case 2://pop elements
        pop();
        break;
    case 3://top elements
    cout<<"the element at top is ";
        Top();
        cout<<endl;
        break;
    case 4://empty elements
        empty();
        break;
    case 5://exit
        break;
    default:
    cout<<"invalid number please enter a valid number ";
        break;
    }
}while(ch!=5);
return 0;
}