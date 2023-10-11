#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

////队列实现栈
//// 链式结构：表示队列 
//typedef int QDataType;
//typedef struct QListNode
//{
//    struct QListNode* next;
//    QDataType data;
//}QNode;
//
//
//// 队列的结构 
//typedef struct Queue
//{
//    QNode* front;
//    QNode* rear;
//}Queue;
//
//
//// 初始化队列 
//void QueueInit(Queue* q);
//// 队尾入队列 
//void QueuePush(Queue* q, QDataType data);
//// 队头出队列 
//void QueuePop(Queue* q);
////打印
//void QueuePrint(Queue* q);
//// 获取队列头部元素 
//QDataType QueueFront(Queue* q);
//// 获取队列队尾元素 
//QDataType QueueBack(Queue* q);
//// 获取队列中有效元素个数 
//int QueueSize(Queue* q);
//// 检测队列是否为空，如果为空返回非零结果，如果非空返回0 
//int QueueEmpty(Queue* q);
//// 销毁队列 
//void QueueDestroy(Queue* q);
//// 初始化队列 
//void QueueInit(Queue* q)
//{
//    assert(q);
//    q->front = NULL;
//    q->rear = NULL;
//}
//// 队尾入队列 
//void QueuePush(Queue* q, QDataType data)
//{
//    assert(q);
//    QNode* newnode = (QNode*)malloc(sizeof(QNode));
//    if (NULL == newnode)
//    {
//        perror("malloc fail");
//        exit(-1);
//    }
//    newnode->data = data;
//    newnode->next = NULL;
//    if (q->front == NULL)
//    {
//        q->front = newnode;
//        q->rear = newnode;
//    }
//    else
//    {
//        q->rear->next = newnode;
//        q->rear = newnode;
//    }
//}
//// 队头出队列 
//void QueuePop(Queue* q)
//{
//    assert(q);
//    assert(q->front);
//    QNode* cur = q->front->next;
//    free(q->front);
//    q->front = cur;
//    if (q->front == NULL)
//        q->rear = NULL;
//}
////打印
//void QueuePrint(Queue* q)
//{
//    assert(q);
//    if (q->front == NULL)
//    {
//        printf("NULL");
//        return;
//    }
//    QNode* cur = q->front;
//    while (cur)
//    {
//        printf("%d ", cur->data);
//        cur = cur->next;
//    }
//}
//// 获取队列头部元素 
//QDataType QueueFront(Queue* q)
//{
//    assert(q);
//    assert(q->front);
//    return q->front->data;
//}
//// 获取队列队尾元素 
//QDataType QueueBack(Queue* q)
//{
//    assert(q);
//    assert(q->front);
//    return q->rear->data;
//}
//// 获取队列中有效元素个数 
//int QueueSize(Queue* q)
//{
//    assert(q);
//    QNode* cur = q->front;
//    int size = 0;
//    while (cur)
//    {
//        cur = cur->next;
//        size++;
//    }
//    return size;
//}
//// 检测队列是否为空，如果为空返回非零结果，如果非空返回0 
//int QueueEmpty(Queue* q)
//{
//    assert(q);
//    return q->front == NULL;
//}
//// 销毁队列 
//void QueueDestroy(Queue* q)
//{
//    assert(q);
//    QNode* cur = q->front;
//    while (cur)
//    {
//        cur = q->front->next;
//        free(q->front);
//        q->front = cur;
//    }
//}
//
//
//typedef struct {
//    Queue q1;
//    Queue q2;
//} MyStack;
//
//
//
//MyStack* myStackCreate() {
//    MyStack* st = (MyStack*)malloc(sizeof(MyStack));
//    QueueInit(&(st->q1));
//    QueueInit(&(st->q2));
//    return st;
//}
//
//
//void myStackPush(MyStack* obj, int x) {
//    Queue* empty = &(obj->q1);
//    Queue* full = &(obj->q2);
//    if (!QueueEmpty(&(obj->q1)))
//    {
//        empty = &(obj->q2);
//        full = &(obj->q1);
//    }
//    QueuePush(full, x);
//}
//
//
//int myStackPop(MyStack* obj) {
//    int tmp;
//    Queue* empty = &(obj->q1);
//    Queue* full = &(obj->q2);
//    if (!QueueEmpty(&(obj->q1)))
//    {
//        empty = &(obj->q2);
//        full = &(obj->q1);
//    }
//    while (QueueSize(full) != 1)
//    {
//        tmp = QueueFront(full);
//        QueuePop(full);
//        QueuePush(empty, tmp);
//    }
//    tmp = QueueFront(full);
//    QueuePop(full);
//    return tmp;
//}
//
//
//int myStackTop(MyStack* obj) {
//    return QueueEmpty(&(obj->q1)) ? QueueBack(&(obj->q2)) : QueueBack(&(obj->q1));
//}
//
//
//bool myStackEmpty(MyStack* obj) {
//    return QueueEmpty(&(obj->q1))
//        && QueueEmpty(&(obj->q2));
//}
//
//
//void myStackFree(MyStack* obj) {
//    QueueDestroy(&(obj->q1));
//    QueueDestroy(&(obj->q2));
//    free(obj);
//}




////栈实现队列
//// 支持动态增长的栈
//typedef int STDataType;
//typedef struct Stack
//{
//	STDataType* a;
//	int top;       // 栈顶
//	int capacity;  // 容量 
//}Stack;
//// 初始化栈 
//void StackInit(Stack* ps);
//// 入栈 
//void StackPush(Stack* ps, STDataType data);
//// 出栈 
//void StackPop(Stack* ps);
////打印
//void StackPrint(Stack* ps);
//// 获取栈顶元素 
//STDataType StackTop(Stack* ps);
//// 获取栈中有效元素个数 
//int StackSize(Stack* ps);
//// 检测栈是否为空，如果为空返回非零结果，如果不为空返回0 
//int StackEmpty(Stack* ps);
//// 销毁栈 
//void StackDestroy(Stack* ps);
//
//// 初始化栈 
//void StackInit(Stack* ps)
//{
//	assert(ps);
//	ps->a = NULL;
//	ps->top = ps->capacity = 0;
//}
//// 入栈 
//void StackPush(Stack* ps, STDataType data)
//{
//	assert(ps);
//	if (ps->top == ps->capacity)
//	{
//		int newcapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
//		STDataType* tmp = (STDataType*)realloc(ps->a, newcapacity * sizeof(STDataType));
//		if (NULL == tmp)
//		{
//			perror("realloc fail");
//			exit(-1);
//		}
//		ps->a = tmp;
//		//记得更新
//		ps->capacity = newcapacity;
//	}
//	ps->a[ps->top] = data;
//	ps->top++;
//}
//// 出栈 
//void StackPop(Stack* ps)
//{
//	assert(ps);
//	assert(ps->a);
//	assert(ps->top > 0);
//	ps->top--;
//}
////打印
//void StackPrint(Stack* ps)
//{
//	assert(ps);
//	assert(ps->a);
//	int size = 0;
//	while (size < ps->top)
//	{
//		printf("%d ", ps->a[size]);
//		size++;
//	}
//}
//// 获取栈顶元素 
//STDataType StackTop(Stack* ps)
//{
//	assert(ps);
//	assert(ps->a);
//	assert(ps->top > 0);
//	return ps->a[ps->top - 1];
//}
//// 获取栈中有效元素个数 
//int StackSize(Stack* ps)
//{
//	assert(ps);
//	assert(ps->a);
//	return ps->top;
//}
//// 检测栈是否为空，如果为空返回非零结果，如果不为空返回0 
//int StackEmpty(Stack* ps)
//{
//	assert(ps);
//	return ps->top == 0;
//}
//// 销毁栈 
//void StackDestroy(Stack* ps)
//{
//	assert(ps);
//	free(ps->a);
//	ps->a = NULL;
//	//记得滞空
//	ps->top = ps->capacity = 0;
//}
//
//
//typedef struct {
//	Stack popst;
//	Stack pushst;
//} MyQueue;
//
//
//MyQueue* myQueueCreate() {
//	MyQueue* q = (MyQueue*)malloc(sizeof(MyQueue));
//	StackInit(&q->popst);
//	StackInit(&q->pushst);
//	return q;
//}
//
//void myQueuePush(MyQueue* obj, int x) {
//	StackPush(&obj->pushst, x);
//}
//
//int myQueuePop(MyQueue* obj) {
//	int tmp;
//	if (StackEmpty(&obj->popst))
//	{
//		while (!StackEmpty(&obj->pushst))
//		{
//			tmp = StackTop(&obj->pushst);
//			StackPush(&obj->popst, tmp);
//		}
//	}
//	tmp = StackTop(&obj->popst);
//	StackPop(&obj->popst);
//	return tmp;
//}
//
//int myQueuePeek(MyQueue* obj) {
//	int tmp;
//	if (StackEmpty(&obj->popst))
//	{
//		while (!StackEmpty(&obj->pushst))
//		{
//			tmp = StackTop(&obj->pushst);
//			StackPop(&obj->pushst);
//			StackPush(&obj->popst, tmp);
//		}
//	}
//
//	return StackTop(&obj->popst);
//}
//
//bool myQueueEmpty(MyQueue* obj) {
//	return StackEmpty(&obj->pushst)
//		&& StackEmpty(&obj->popst);
//}
//
//void myQueueFree(MyQueue* obj) {
//	StackDestroy(&obj->popst);
//	StackDestroy(&obj->pushst);
//	free(obj);
//}
//int main()
//{
//	MyQueue *q = myQueueCreate();
//	myQueuePush(q, 1);
//	myQueuePush(q, 2);
//	printf("%d", myQueuePeek(q, 1));
//	return 0;
//}


//循环队列
typedef struct {
    int* a;
    int front;
    int rear;
    int k;
} MyCircularQueue;


MyCircularQueue* myCircularQueueCreate(int k) {
    MyCircularQueue* q = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
    if (NULL == q)
        exit(-1);
    q->a = (int*)malloc(sizeof(int) * (k + 1));
    q->front = q->rear = 0;
    q->k = k + 1;
    return q;
}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
    if ((obj->rear + 1) % (obj->k) == obj->front)
        return false;
    obj->a[obj->rear] = value;
    obj->rear++;
    obj->rear %= obj->k;
    return true;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj) {
    if (obj->rear == obj->front)
        return false;
    obj->front = (obj->front + obj->k + 1) % obj->k;
    return true;
}

int myCircularQueueFront(MyCircularQueue* obj) {
    if (obj->rear == obj->front)
        return -1;
    return obj->a[obj->front];
}

int myCircularQueueRear(MyCircularQueue* obj) {
    if (obj->rear == obj->front)
        return -1;
    return obj->a[(obj->rear - 1 + obj->k) % (obj->k)];
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
    return obj->rear == obj->front;
}

bool myCircularQueueIsFull(MyCircularQueue* obj) {
    return (obj->rear + 1) % (obj->k) == obj->front;
}

void myCircularQueueFree(MyCircularQueue* obj) {
    free(obj->a);
    obj->a = NULL;
    obj->front = obj->rear = 0;
    free(obj);
}

int main()
{
    MyCircularQueue* q = myCircularQueueCreate(3);
    myCircularQueueEnQueue(q, 1);
    myCircularQueueEnQueue(q, 2);
    myCircularQueueEnQueue(q, 3);
    myCircularQueueEnQueue(q, 4);
    printf("%d", myCircularQueueRear(q));
    bool empty = myCircularQueueIsEmpty(q);
    bool full = myCircularQueueIsFull(q);
    myCircularQueueDeQueue(q);
    myCircularQueueDeQueue(q);
    myCircularQueueDeQueue(q);
    
    myCircularQueueFree(q);
    return 0;
}