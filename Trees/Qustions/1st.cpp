
// find the height of the Tree
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

int height(Node* root){
       if(root == NULL){
           return 0;
       }
          int leftHT = height(root->left);
          int rightHT = height(root->right);

          return max(leftHT , rightHT) + 1 ;

}


int main(){
    
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(preorder);

    cout<<"height is : "<<height(root)<<endl;
    return 0;
}