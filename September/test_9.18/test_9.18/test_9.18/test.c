#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
struct Node {
	int val;
	struct Node* next;
	struct Node* random;
};
struct Node* copyRandomList(struct Node* head) {
    if (head == NULL)
        return NULL;
    struct Node* copy = head;
    struct Node* near = copy->next;
    while (copy)
    {
        near = copy->next;
        struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
        if (NULL == newnode)
        {
            perror("malloc fail");
            exit(-1);
        }
        newnode->val = copy->val;
        copy->next = newnode;
        newnode->next = near;
        copy = near;
    }
    copy = head;
    near = copy->next;
    while (copy)
    {
        near = copy->next;
        if (copy->random != NULL)
            near->random = copy->random->next;
        else
            near->random = copy->random;
        copy = near->next;
    }
    near = head->next;
    free(head);
    head = near;
    copy = near->next;
    while (near->next)
    {
        copy = near->next;
        near->next = copy->next;
        free(copy);
        near = near->next;

    }
    return head;
}
int main()
{
    struct Node* node1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* node2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* node3 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* node4 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* node5 = (struct Node*)malloc(sizeof(struct Node));
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = NULL;
    node1->val = 7;
    node2->val = 13;
    node3->val = 11;
    node4->val = 10;
    node5->val = 1;
    node1->random = NULL;
    node2->random = node1;
    node3->random = node5;
    node4->random = node3; 
    node5->random = node1;
    struct Node* head = copyRandomList(node1);
    struct Node* cur = head;
    while (head)
    {
        printf("%d ", head->val);
        head = head->next;
    }
    printf("\n");
    head = cur;
    while (head)
    {
        if (head->random != NULL)
            printf("%d ", head->random->val);
        else
            printf("NULL ");
        head = head->next;
    }
    return 0;
}