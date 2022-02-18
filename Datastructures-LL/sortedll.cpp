#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

class LinkedList{
    public:
    int length=0;
    Node *head;

    LinkedList(){
         head=NULL;
    }
    void insertNode(int);
    void displayll();
    void insertinsorted(int);
    bool checkifsorted();
};
void LinkedList::insertNode(int value){
    Node *temp=new Node(value);
    if (head==NULL){
        head=temp;
        length+=1;

    }
    else{
        Node *ptr=head;
        while (ptr->next){
            ptr=ptr->next;
        }
        ptr->next=temp;
        length+=1;
    }
}

void LinkedList::displayll(){
    if(head==NULL){
        cout<<"Sorry no elements to print"<<endl;
    }
    else{
        Node *temp=head;
        while (temp)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
}

void LinkedList::insertinsorted(int value){
    Node* temp=new Node(value);
    if (value<head->data){
        temp->next=head;
        head=temp;
        length+=1;
    }
    else{
        Node *prev,*next=head;
        int c=0;
        while (next){
            if(value<next->data){
                temp->next=prev->next;
                prev->next=temp;
                length+=1;
                
            }
            prev=next;
            next=next->next;
            c+=1;

        }
        if (c==length){
            prev->next=temp;
            length+=1;
        }
    }

}

bool LinkedList::checkifsorted(){
    int c=0;
    Node *prev,*temp=head;
    while (temp->next){
        if (temp->data<temp->next->data){
            // cout<<temp->data<<" "<<temp->next->data<<endl;
            c+=1;
        }
        temp=temp->next;
    }
    
    if ((c+1)==length){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    LinkedList ll;
    cout<<ll.length<<endl;
    cout<<ll.head<<endl;
    ll.insertNode(10);
    ll.insertNode(20);
    ll.insertNode(30);
    ll.insertNode(11);
    ll.displayll();
    cout<<endl;
    cout<<ll.length<<endl;
    ll.insertinsorted(25);
    ll.displayll();
    cout<<endl;
    ll.insertinsorted(35);
    ll.displayll();
    cout<<endl;
    ll.insertinsorted(5);
    ll.displayll();
    cout<<endl;
    cout<<ll.length<<endl;
    cout<<ll.checkifsorted();
}