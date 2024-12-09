#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int num;
    struct Node *next;
} Node;

// �����ڵ�
Node *createNode(int num)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->num = num;
    newNode->next = NULL;
    return newNode;
}

// ��ʼ��ѭ������
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
    current->next = head; // �γɱջ�
    return head;
}

// ģ����Ϸ����
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
        printf("�Ƴ��ڵ� %d\n", current->num); // ������Ϣ
        prev->next = current->next;            // ��3�߳���
        if (current == *head)
        { // ����Ƴ�����ͷ�ڵ㣬����ͷ�ڵ�
            *head = current->next;
        }
        free(current); // �ͷ��ڴ�
        current = prev->next;
        n--;
    }
    int winner = (*head)->num;
    free(*head); // �ͷ����Ľڵ�
    return winner;
}

int main()
{
    int n;
    printf("����������: ");
    scanf("%d", &n);
    Node *head = initCircleList(n);
    int winner = playGame(&head, n);
    printf("����Ӯ�ұ����: %d\n", winner);
    return 0;
}