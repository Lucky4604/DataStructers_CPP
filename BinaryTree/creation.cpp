Struct Node{
    int data;
    Struct Node* right;
    Struct Node* left;

    //method to initaialize that value
    Node (int val){
        data=val;
        right=left=NULL;
    }
};
main(){
    Struct Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->right=new Node(5);
}