#include<iostream>
#include<vector>
#include<queue>

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
    Node* buildTree (vector<int>preorder){
        
           Idx++;

           if(preorder[Idx] == -1){
             return NULL;
           }

         Node*root = new Node(preorder[Idx]);

         root->left = buildTree(preorder);//LEFT
         root->right = buildTree(preorder); //RIGHT

           return root;
    }

    //preorder traversal
    void preOrder(Node* root){
       if(root == NULL){
             return;
       }

       cout<<root->data<<endl;
       preOrder(root->left);
       preOrder(root->right);
    }

    //inOreder traversal    (left,root,right)


      void inOrder(Node* root){ //root->means not the main root , root represent the currrent root

          if(root == NULL){
             return;
          }

          inOrder(root->left);
          cout<<root->data<<endl;
          inOrder(root->right);


      }


      // postOrder traversal (left,right,root)

      void postOrder(Node* root){
         if(root == NULL){
              return;
         }

         postOrder(root->left);
         postOrder(root->right);
         cout<<root->data<<endl;


      }

      //levelOrder traversal

      void levelOrder(Node* root){
          queue<Node*>queue;
          queue.push(root);

          while (queue.size() > 0 )
          {
              Node* curr = queue.front();
              queue.pop();

              cout<<curr->data<<" ";

              if(curr->left!=NULL){
                queue.push(curr->left);
              }

              if(curr->right!=NULL){
                queue.push(curr->right);
              }

          }

          cout<<endl;

      }
int main(){
      vector<int>preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

      Node*  root =  buildTree(preorder);//1st main root
      // cout<<root->data<<" "<<endl;
      // cout<<root->left->data<<" "<<endl;
      // cout<<root->right->data<<" "<<endl;

      preOrder(root);
      inOrder(root);
      postOrder(root);
      levelOrder(root);
   return 0;
}