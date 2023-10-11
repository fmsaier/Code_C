#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <stdbool.h>
struct TreeNode{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};
////965. 单值二叉树
////如果二叉树每个节点都具有相同的值，那么该二叉树就是单值二叉树。
////
////只有给定的树是单值二叉树时，才返回 true；否则返回 false。
//bool isUnivalTree(struct TreeNode* root) {
//    if (root == NULL)
//        return true;
//    if (root->left && root->left->val != root->val)
//        return false;
//    if (root->right && root->right->val != root->val)
//        return false;
//    return isUnivalTree(root->left)
//        && isUnivalTree(root->right);
//}
//
////104. 二叉树的最大深度
////给定一个二叉树 root ，返回其最大深度。
////
////二叉树的 最大深度 是指从根节点到最远叶子节点的最长路径上的节点数。
//int maxDepth(struct TreeNode* root) {
//    if (root == NULL)
//        return 0;
//    return fmax(maxDepth(root->left), maxDepth(root->right)) + 1;
//}
//
//
////226. 翻转二叉树
////给你一棵二叉树的根节点 root ，翻转这棵二叉树，并返回其根节点.
//struct TreeNode* invertTree(struct TreeNode* root) {
//    if (root == NULL)
//        return NULL;
//    struct TreeNode* left = invertTree(root->left);
//    struct TreeNode* right = invertTree(root->right);
//    root->right = left;
//    root->left = right;
//    return root;
//}
//
//
//
////100. 相同的树
////给你两棵二叉树的根节点 p 和 q ，编写一个函数来检验这两棵树是否相同。
////
////如果两个树在结构上相同，并且节点具有相同的值，则认为它们是相同的。
//bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
//    if (p == NULL && q == NULL)
//        return true;
//    if (q == NULL || p == NULL)
//        return false;
//    if (q->val != p->val)
//        return false;
//    return  isSameTree(p->left, q->left)
//        && isSameTree(p->right, q->right);
//}
//
//
//
//
//
////101. 对称二叉树
////给你一个二叉树的根节点 root ， 检查它是否轴对称。
//bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
//    if (p == NULL && q == NULL)
//        return true;
//    if (q == NULL || p == NULL)
//        return false;
//    if (q->val != p->val)
//        return false;
//    return  isSameTree(p->left, q->right)
//        && isSameTree(p->right, q->left);
//}
//bool isSymmetric(struct TreeNode* root) {
//    if (root == NULL)
//        return true;
//
//    return isSameTree(root->left, root->right)
//        && isSameTree(root->right, root->left);
//}
//
//
//
//
//
//
////572. 另一棵树的子树
////给你两棵二叉树 root 和 subRoot 。检验 root 中是否包含和 subRoot 具有相同结构和节点值的子树。如果存在，返回 true ；否则，返回 false 。
////
////二叉树 tree 的一棵子树包括 tree 的某个节点和这个节点的所有后代节点。tree 也可以看做它自身的一棵子树。
//bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
//    if (p == NULL && q == NULL)
//        return true;
//    if (q == NULL || p == NULL)
//        return false;
//    if (q->val != p->val)
//        return false;
//    return  isSameTree(p->left, q->left)
//        && isSameTree(p->right, q->right);
//}
//bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot) {
//    if (root == NULL)
//        return false;
//    if (root->val == subRoot->val)
//    {
//        bool issame = isSameTree(root, subRoot);
//        if (issame)
//            return issame;
//    }
//
//    return isSubtree(root->left, subRoot)
//        || isSubtree(root->right, subRoot);
//}




//前序遍历
int BinarySize(struct TreeNode* root)
{
    if (root == NULL)
        return 0;
    return BinarySize(root->left) + BinarySize(root->right) + 1;
}
void PreOrder(struct TreeNode* root, int* a, int* pi)
{
    if (root == NULL)
        return;
    a[*pi] = root->val;
    (*pi)++;    if (a == NULL)
        return NULL;
    PreOrder(root->left, a, pi);
    PreOrder(root->right, a, pi);
}
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int n = BinarySize(root);
    int* a = (int*)malloc(sizeof(int) * n);
    if (a == NULL)
        return NULL;
    int i = 0;
    PreOrder(root, a, &i);
    *returnSize = n;
    return a;
}



//中序遍历
int BinarySize(struct TreeNode* root)
{
    if (root == NULL)
        return 0;
    return BinarySize(root->left) + BinarySize(root->right) + 1;
}
void InOrder(struct TreeNode* root, int* a, int* pi)
{
    if (root == NULL)
        return;
    InOrder(root->left, a, pi);
    a[(*pi)++] = root->val;
    InOrder(root->right, a, pi);
}
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int n = BinarySize(root);
    int* a = (int*)malloc(sizeof(int) * n);
    if (a == NULL)
        return NULL;
    int i = 0;
    InOrder(root, a, &i);
    *returnSize = n;
    return a;
}




//后序遍历
int BinarySize(struct TreeNode* root)
{
    if (root == NULL)
        return 0;
    return BinarySize(root->left) + BinarySize(root->right) + 1;
}
void PostOrder(struct TreeNode* root, int* a, int* pi)
{
    if (root == NULL)
        return;
    PostOrder(root->left, a, pi);
    PostOrder(root->right, a, pi);
    a[(*pi)++] = root->val;
}
int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    int n = BinarySize(root);
    int* a = (int*)malloc(sizeof(int) * n);
    if (a == NULL)
        return NULL;
    int i = 0;
    PostOrder(root, a, &i);
    *returnSize = n;
    return a;
}