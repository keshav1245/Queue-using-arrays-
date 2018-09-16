/* This file was first created on 18th August,2018 by Keshav Tangri
This is for educational purposes only.
This is for B.Tech Students who are or will be studying Data Structures in there curriculum
For queries mail me @ : tangri57@gmail.com
*/

#include<iostream>
#include<stdlib.h>
using namespace std;
#define MAX 5

class queue{
public:
int front;
int rear;
int * que = new int[MAX];
queue(){
front=-1;
rear=-1;
}
void insert(int val);
void del();
void display();
};
//INSERT QUEUE
void queue::insert(int val){
if(front==-1&&rear==-1){
front++;
rear++;
}else if(rear==MAX-1){
cout<<"\n\nQUEUE FULL !\n\n";
return;
}else{
rear++;
}
que[rear] = val;
cout<<"\n\nELEMENT ADDED !\n\n";
}
//display Queue
void queue::display(){
if(front==-1&&rear==-1){
cout<<"\n\nEMPTY QUEUE !\n\n";
return;
}
for(int i=front;i<=rear;i++){
cout<<que[i]<<" ";
}
cout<<"\n\n";
}
//delete element
void queue::del(){
if(front==-1&&rear==-1){
cout<<"\n\nUNDER FLOW !\n\n";
return;
}else if(front == rear){
front =-1;
rear = -1;
cout<<"\n\nELEMENT DELETED !\n\n";
return;
}else{
front++;
cout<<"\n\nELEMENT DELETED !\n\n";
return;
}
}

int main(){
int i,value;
queue obj;
while(1){
cout<<"\n1.ADD AN ELEMENT TO QUEUE\n2.DELETE AN ELEMENT\n3.DISPLAY\n4.EXIT\n Choose one : ";
cin>>i;
switch(i){
case 1:
cout<<"Enter Value you want to add in queue : ";
cin>>value;
obj.insert(value);
break;
case 2:
obj.del();
break;
case 3:
obj.display();
break;
case 4:
exit(0);
break;
}

}

}
