#include<iostream>
using namespace std;
class node{
       /* private:
            node* left;
            node* right;
            int data;*/
    public:
         node* left;
        node* right;
        int data;
        node(int data){
             this->left=this->right=NULL;
            this->data=data;
        }
      // friend class bst; //~node();
};

class bst{
    private:
        node* root;
    public:
        int data;
        bst(){
            node* root=NULL;
        }
        bst(node* root,int data){
            this->root=root;
            this->data=data;
        }
        //~bst();
        friend node* inserting( node* root,int key);
        void friend inorder( node* root);
        bst operator=(const bst &ob);
        friend istream &operator>>(istream &&in,bst &ob);
        friend ostream &operator<<(ostream &out, const bst &ob);
        friend class node;
};
  node* inserting(node*root,int key){
    if(root==NULL){
        return new node(key);
            }
    else if(root->data<key)
    root->right=inserting(root->right,key);
    else if (root->data>key)
    root->left=inserting(root->left,key);
    return root;
    }
    void inorder(node* root){
        if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
        }
    }

      bst bst::operator=(const bst &ob){
        this->root=ob.root;
        this->data=ob.data;
    }
      istream &operator>>(istream &in,bst &ob)
    {
        cout<<"enter key"<<endl;
        in>>ob.data;
        return in;
    }
     ostream &operator<<(ostream &out,const bst &ob){
        out<<ob.data<<endl;
        return out;
    }
    int main()
    {
        node* head=NULL;
        head=inserting(head,2);
        inserting(head,23);
        inserting(head,6);
        inserting(head,25);
        inserting(head,20);
        inorder(head);
        return 0;
    }


