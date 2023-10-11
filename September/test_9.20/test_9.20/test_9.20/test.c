#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <stdbool.h>
struct TreeNode{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};
////965. ��ֵ������
////���������ÿ���ڵ㶼������ͬ��ֵ����ô�ö��������ǵ�ֵ��������
////
////ֻ�и��������ǵ�ֵ������ʱ���ŷ��� true�����򷵻� false��
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
////104. ��������������
////����һ�������� root �������������ȡ�
////
////�������� ������ ��ָ�Ӹ��ڵ㵽��ԶҶ�ӽڵ���·���ϵĽڵ�����
//int maxDepth(struct TreeNode* root) {
//    if (root == NULL)
//        return 0;
//    return fmax(maxDepth(root->left), maxDepth(root->right)) + 1;
//}
//
//
////226. ��ת������
////����һ�ö������ĸ��ڵ� root ����ת��ö�����������������ڵ�.
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
////100. ��ͬ����
////�������ö������ĸ��ڵ� p �� q ����дһ���������������������Ƿ���ͬ��
////
////����������ڽṹ����ͬ�����ҽڵ������ͬ��ֵ������Ϊ��������ͬ�ġ�
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
////101. �Գƶ�����
////����һ���������ĸ��ڵ� root �� ������Ƿ���Գơ�
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
////572. ��һ����������
////�������ö����� root �� subRoot ������ root ���Ƿ������ subRoot ������ͬ�ṹ�ͽڵ�ֵ��������������ڣ����� true �����򣬷��� false ��
////
////������ tree ��һ���������� tree ��ĳ���ڵ������ڵ�����к���ڵ㡣tree Ҳ���Կ����������һ��������
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




//ǰ�����
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



//�������
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




//�������
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