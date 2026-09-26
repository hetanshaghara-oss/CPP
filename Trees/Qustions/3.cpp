
// sum of all node

#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

         Node(int value){
               data = value;
              left = right = NULL;
         
    }
};


static int Idx = -1;

Node* buildTree(vector<int>preorder){
             
     Idx++;

     if(preorder[Idx] == -1){
        return NULL;
     }

     Node* root = new Node(preorder[Idx]);

     root->left = buildTree(preorder);
     root->right = buildTree(preorder);

     return root;
}

int sum(Node* root){

    if(root == NULL){
         return 0;
    }
      
   int leftSum = sum(root->left);
   int rightSum = sum(root->right);

   return leftSum + rightSum + root->data;

}


int main(){
    
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(preorder);

    cout<<"sum of all nodes is the : "<<sum(root)<<endl;
    return 0;
}