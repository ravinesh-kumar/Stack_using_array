//Stack using array code running succesfully
#include<iostream>
#include<cstdlib>
#include<cstdio>
#define n 5
using namespace std;
int tos=-1;
int stack[100];
// int a;

int push(){
    if(n==n+1){
        cout<<"stack is overflow";

    }
    else{
        int a;
        while(a){
            int x;
            cout<<"enter the element in stack";
            cin>>x;
            tos++;  //main 2 line
            stack[tos]=x;  //2
            cout<<"do u want to continue press 1 else press any key ";
            cin>>a;
        }
        
    }

}

int pop(){
    if(n==-1){
        cout<<"stack is underflow";
    }
    else{
        int item = stack[tos];
        tos--;
        cout<<"the deleted item is "<<item;
    }
}

int peek(){
    if(tos==-1){
        cout<<"underflow";
    }
    else{
        int item = stack[tos];
        cout<<"the tos of the stack is "<<item;
    }
}
int display(){
    int i;
    for(i=tos;i>=0;i--){
        cout<<"the element in the stack is ";
        cout<< stack[i];
        cout<<"\n";
    }
}

int main()
{
    int ch;
    do{
        cout<<" press 1 for push \n press 2 for pop \n press 3 for peek \n press 4 for display ";
        cin>>ch;
        switch(ch){
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            peek();
            break;
            case 4:
            display();
            break;
            default:
            cout<<"invalid entry";

        }
        
    } while(!ch==0);
}
