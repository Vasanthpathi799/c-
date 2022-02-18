#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }

};

class Tree{
    public:
        Node *root;
    Tree(){
        root=NULL;
    }

   Node* insert(Node* root){
    int data;
    cout<<"Enter data"<<endl;
    cin>>data;
    Node* temp=new Node(data);
    if (data==-1){
        return root;
    }
    if(root==NULL){
        root=temp;
    }
    cout<<"Enter data to the left of"<<" "<<data<<endl;
    root->left=insert(root->left);
    cout<<"Enter data to the right of"<<" "<<data<<endl;
    root->right=insert(root->right);
    }
    void display(Node *root){
        Node *temp=root;
        if(root==NULL){
            return ;
        }
        else{
            cout<<root->data<<endl;
            display(root->left);
            display(root->right);

        }
    }
};

int main(){
    Tree t;
    t.insert(t.root);
    cout<<t.root;
    t.display(t.root);
}