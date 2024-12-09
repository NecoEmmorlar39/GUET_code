#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int num;
    struct Node *next;
} Node;

// 创建节点
Node *createNode(int num)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->num = num;
    newNode->next = NULL;
    return newNode;
}

// 初始化循环链表
Node *initCircleList(int n)
{
    if (n <= 0)
        return NULL;
    Node *head = createNode(1);
    Node *current = head;
    for (int i = 2; i <= n; ++i)
    {
        current->next = createNode(i);
        current = current->next;
    }
    current->next = head; // 形成闭环
    return head;
}

// 模拟游戏过程
int playGame(Node **head, int n)
{
    Node *current = *head;
    Node *prev = NULL;
    while (n > 1)
    {
        for (int count = 1; count < 3; ++count)
        {
            prev = current;
            current = current->next;
        }
        printf("移除节点 %d\n", current->num); // 调试信息
        prev->next = current->next;            // 报3者出局
        if (current == *head)
        { // 如果移除的是头节点，更新头节点
            *head = current->next;
        }
        free(current); // 释放内存
        current = prev->next;
        n--;
    }
    int winner = (*head)->num;
    free(*head); // 释放最后的节点
    return winner;
}

int main()
{
    int n;
    printf("请输入人数: ");
    scanf("%d", &n);
    Node *head = initCircleList(n);
    int winner = playGame(&head, n);
    printf("最后的赢家编号是: %d\n", winner);
    return 0;
}