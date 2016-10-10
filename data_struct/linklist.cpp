/*
C++ program to implement single link list 
Author:ghos-t
Date:05-10-2016
*/

#include<iostream>
//#include<cstdio>
#include<cstdlib>

using namespace std;

//Node Decleration

struct node {
int info;
struct node *next;
};

//Start Pointer

struct node *start;

//Class Decleration

class SingleLinkList {
public:

node *create_node(int);
void insert_begin();
void insert_position();
void insert_last();
void delete_position();
void sort();
void search();
void update();
void reverse();
void display();

//constructor
SingleLinkList();
};

SingleLinkList::SingleLinkList(){
start=NULL;
}

node *SingleLinkList::create_node(int value){
struct node *temp;
temp=new(struct node);
if(temp == NULL){
cout<<"Memory not allocated"<<endl;
return 0;
}
else{
temp->info=value;
temp->next=NULL;
return temp;
}
}

void SingleLinkList::insert_begin(){
struct node *temp,*p;
int value;
cout<<"Enter the value to be inserted in list: ";
cin>>value;
temp=create_node(value);
if(start==NULL){
start=temp;
start->next=NULL;
}
else{
p=start;
start=temp;
start->next=p;
}
cout<<"Element Inserted at begining"<<endl;
}

void SingleLinkList::insert_position(){
struct node *temp,*p,*s;
int value,pos,counter;
cout<<"Enter the position to be inserted: ";
cin>>pos;
cout<<"Enter the value to be inserted in list: ";
cin>>value;
temp=create_node(value);
s=start;
while(s!=NULL){
counter++;
s=s->next;
}
if(pos == 1){
if(start == NULL){
start=temp;
start->next=NULL;
}
else{
p=start;
start=temp;
start->next=p;
}
}
else if(pos > 1 && pos <= counter){
s=start;
for(int i=1;i<pos;i++){
p=s;
s=s->next;
}
p->next=temp;
temp->next=s;
}
else{
cout<<"Position out of Range"<<endl;
}
}


void SingleLinkList::insert_last(){
struct node *temp,*s;
int counter,value;
cout<<"Enter the value to be inserted in list: ";
cin>>value;
s=start;
while(s!=NULL){
counter++;
s=s->next;
}
s->next=temp;
temp->next=NULL;
}

void SingleLinkList::delete_position(){
int pos,i,counter=0;
if(start==NULL){
cout<<"List is Empty "<<endl;
return;
}
cout<<"Enter the position of value to be deleted: ";
cin>>pos;
struct node *s,*ptr;
s=start;
if(pos==1){
start=s->next;
}
else{
while(s!=NULL){
s=s->next;
counter++;
}
if(pos>0&&pos<=counter){
s=start;
for(int i=1;i<pos;i++){
ptr=s;
s=s->next;
}
ptr->next=s->next;
}
else{
cout<<"Position out of Range "<<endl;
}
free(s);
cout<<"Element Deleted "<<endl;
}
}

void SingleLinkList::update(){
int value,pos,i;
if(start==NULL){
cout<<"List is empty "<<endl;
return ;
}
cout<<"Enter the node position to be updated : ";
cin>>pos;
cout<<"Enter the new value : ";
cin>>value;
struct node *s,*ptr;
s=start;
if(pos == 1){
start->info = value;
}
else{
for(int i=0;i<pos-1;i++){
if(s==NULL){
cout<<"These are less than "<<pos<<" element.";
return ;
}
s=s->next;
}
s->info=value;
}
cout<<"Node Updated"<<endl;
}

void SingleLinkList::sort(){
struct node *ptr,*s;
int value;
if(start==NULL){
cout<<"The List is Empty"<<endl;
return ;
}
ptr=start;
while(ptr!=NULL){
for(s=ptr->next;s!=NULL;s=s->next){
if(ptr->info>s->info)
value=ptr->info;
ptr->info=s->info;
s->info=value;
}
}
ptr=ptr->next;
}

void SingleLinkList::search(){
int value,pos=0;
bool flag=false;
if(start == NULL){
cout<<"List is Empty"<<endl;
return;
}
cout<<"Enter the value to be searched : ";
cin>>value;

struct node *s;
s=start;

while(s!=NULL){
pos++;
if(s->info==value){
flag=true;
cout<<"Element "<<value<<" is found at position "<<pos<<endl;
}
s=s->next;
}
if(!flag)
cout<<"Element "<<value<<" not found in the list "<<endl;
}


void SingleLinkList::reverse(){
struct node *ptr1,*ptr2,*ptr3;
if(start==NULL){
cout<<"List is Empty"<<endl;
return ;
}
if(start->next==NULL){
return;
}
ptr1=start;
ptr2=ptr1->next;
ptr3=ptr2->next;
ptr1->next=NULL;
ptr2->next=ptr1;

while(ptr3!=NULL){
ptr1=ptr2;
ptr2=ptr3;
ptr3=ptr3->next;
ptr2->next=ptr1;
}
start=ptr2;
}

void SingleLinkList::display(){
struct node *temp;
if(start==NULL){
cout<<"The List is Empty"<<endl;
return ;
}
temp=start;
cout<<"Element of list are: "<<endl;
while(temp!=NULL){
cout<<temp->info<<" -> ";
temp=temp->next;
}
cout<<"NULL"<<endl;
}


int main(){

int choice;
SingleLinkList sl;
start=NULL;

while(1){
cout<<endl<<"-----------------------------------------"<<endl;
cout<<"Operations on Single Link List"<<endl;
cout<<"-----------------------------------------"<<endl;
cout<<"1.Insert node at Begining"<<endl;
cout<<"2.Insert node at position"<<endl;
cout<<"3.Insert node at last"<<endl;
cout<<"4.Sort link list"<<endl;
cout<<"5.Delete a particular node"<<endl;
cout<<"6.Update node value"<<endl;
cout<<"7.Search Element"<<endl;
cout<<"8.Display link list"<<endl;
cout<<"9.Reverse link list"<<endl;
cout<<"10.Exit"<<endl;

cout<<"Enter Your Choice : ";
cin>>choice;

switch(choice){
case 1:
sl.insert_begin();
break;
case 2:
sl.insert_position();
break;
case 3:
sl.insert_last();
break;
case 4:
sl.sort();
break;
case 5:
sl.delete_position();
break;
case 6:
sl.update();
break;
case 7:
sl.search();
break;
case 8:
sl.display();
break;
case 9:
sl.reverse();
break;
case 10:
exit(0);
break;
default:
cout<<"Please Enter Proper Choice"<<endl;
}
}
return 0;
}

