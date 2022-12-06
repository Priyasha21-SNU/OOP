#include<iostream>
using namespace std;
template<typename t>
 class node{
     public:
         t data;
         node<t>* next=NULL;
         node<t>* prev=NULL;
        node(t data);
        node(t* data);
    };
    template<typename t>
    node<t>::node(t data){
        this->data=data;
    }
    template<typename t>
    node<t>::node(t* data){
        this->data=data;
    }
    template<typename t>
    class ll{
        public:
            t ele;
            node<t>* head;
            node<t>* tail;
            ll<t>();
            ~ll();
            void display();
            void addbeg(t* new_node);
        };
        template<typename t>
        ll<t>::ll()
        {
            this->ele=0;
            this->head=NULL;
            this->tail=NULL;
        }
        template<typename t>
        ll<t>::~ll(){

            }
        template<typename t>
        void ll<t>::display(){
            node<t>*temp=this->head;
            while(temp){
                cout<< temp->data<<endl;
                temp=temp->next;

            }
        template <typename t>
        void ll<t>::addbeg(t*new_node)
        {
            new_node->next=NULL;
            new_node->prev=NULL;
            if(this->head==NULL){
                this->head=new_node;
                this->tail=this->head;

            }
            else{
                this->head->prev=new_node;
                new_node->next=head;
                this->head=new_node;
            }

        }
        int main(){
            ll<node<double>>mylist;
            mylist.new node<double>addbeg(20);
            mylist.new node<double>addbeg(70);
            mylist.new node<double>addbeg(250);
            mylist.new node<double>addbeg(206);
            mylist.display();
            return 0;
            }


