/*
 If given a value, find the val in the tree.
 */

int level(Node *root, int val){
    if (root == NULL) {
        return 0;
    }
    if (root->val == val) {
        return 0;
    }
    int r = level(root->right, val);
    
    if (r != -1) {
        return r+1;
    }
    if (r == -1) {
        l = level(root->left, val);
    }
    if (l == -1) {
        return -1;
    }
    return l + 1;
    
}