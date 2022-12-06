#include<iostream>
using namespace std;
class node{
    int data;
    node*right;
    node* left;
public:
        node(int val){
            data=val;
            left=right=NULL;
            }
            friend node* bst(node*root,int key);
            friend void inorder(node* root);
           // friend void preorder(node* root);
            //friend void postorder(node* root);

    };
    node* bst(node* root,int key){
                if(root==NULL){
                   return new node(key);
                }
                else if(root->data<key)
                    root->right=bst(root->right,key);
                 else if (root->data>key)
                    root->left=bst(root->left,key);
                    return root;
                }
            void inorder(node*root)
            {
                if(root==NULL){
                    return;
                }
                inorder(root->left);
                cout<<root->data<<" ";
                inorder(root->right);
           /* void preorder(node*root)
            {
                if(root==NULL){
                    return;
                }
                //inorder(root->left);
                cout<<"pre order : "<<root->data<<" ";
                preorder(root->left);
                preorder(root->right);
            }
            void postorder(node*root)
            {
                if(root==NULL){
                    return;
                }
                postorder(root->left);
                postorder(root->right);
                cout<<"post order:  "<<root->data<<" ";
            }*/
    int main()
    {
        node *root=NULL;
        root=bst(root,2);
        bst(root,23);
        bst(root,6);
        bst(root,25);
        bst(root,20);
        inorder(root);
        //preorder(root);
        //postorder(root);
        return 0;
    }
