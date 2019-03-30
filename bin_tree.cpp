#include<iostream>
using namespace std;

class Node{
  public:
	   int data;
	   Node*left;
	   Node*right;
       Node*parent;
Node(){
	  left=NULL;
	  right=NULL;
	  data=value;
      parent=NULL;
  }
 };
class bist{
   public:
   Node*root;
   bist(){
    	root=NULL;
        }
void insert(int value){
    //calling recursion
   insertthat(root,value);
    }
void insertthat(Node*curr,int value){
//base case root is null then to insert there
//the tree was empty
  if(curr == NULL){
        curr = new Node(value);
  if (root==NULL){
      root=curr;
   }
 return;
}
//else compare the  current->data with value
else if (value<curr->data){
  //current=Node*temp;
//if current->data<value then move left and call insert
//if left is null
if (curr->left=NULL){
     curr->left=new Node(value);
     current->left->parent=current;
     }
  else {
   insertthat(current->left,value);
    }
 
  //temp->left=curr;
//else move right and call insert
 
else{
  // current=Node*temp;
if (curr->right = NULL)curr->right=new Node(value);
   current->right->parent=current;
 else insertthat(current->right,value);
   // temp-> right =curr;
 }
}
/*void function(Node*root){
  Node*find-min(Node*curr)
  if (curr->data==root->data){
   cout << curr->data;*/
void replace (){
      
  
  
      
void display(){
        display2(root);
        } 
display2(curr->left);
//display root
cout <<curr->data<<"->";
//display right 
display2(curr->right);
 } 
/*int height();
bool search();
void delet();*/
int count (Node*root){
   root =Node*curr;
   if(root==NULL){
                  cout << "0";
                 }
   else{
    while (curr->left=!NULL){
             current=current->left;
               
   














bool search (int value){
 if (curr==NULL||curr->data==value)return curr;
else if (value<curr->data)return search(curr->left,value);
else return search (current->right,value);
}
};
int main(){
bist b1;
b1.insert(3);
b1.insert(3);
b1.insert(4);
b1.display();
return 0;
}





      

