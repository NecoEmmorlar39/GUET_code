#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct nmb
{
    int number;
    int xuehao;
    struct nmb *next;
} nmb;
void print_list(nmb *head)
{
    nmb *p;
    for (p = head; p != NULL; p = p->next)
    {
        printf("%d ", p->xuehao);
    }
    printf("\n");
}
void delete_node(int delete, nmb **head)
{
    nmb *t = *head, *q = NULL, *p;
    while (t != NULL && t->number != delete)
    {
        q = t;
        t = t->next;
    }
    q->next = t->next;
    free(t);
    for (p = *head; p != NULL; p = p->next)
    {
        p->number -= 1;
    }
}
void insert_node(int in, int in_ele, nmb **head)
{
    nmb *p;
    for (p = *head; p != NULL; p = p->next)
    {
        if (p->number == in)
        {
            nmb *temp = (nmb *)malloc(sizeof(nmb));
            temp->xuehao = in_ele;
            temp->number = in + 1;
            temp->next = p->next;
            p->next = temp;
            for (nmb *a = temp->next; a != NULL; a = a->next)
            {
                a->number += 1;
            }
            break;
        }
    }
}
void search_index(int index, nmb *head)
{
    nmb *p;
    for (p = head; p != NULL; p = p->next)
    {
        if (p->number == index)
        {
            printf("%d\n", p->xuehao);
            break;
        }
    }
}
void search_number(int number, nmb *head)
{
    nmb *p;
    for (p = head; p != NULL; p = p->next)
    {
        if (p->xuehao == number)
        {
            printf("%d %d\n", p->number, number);
            break;
        }
    }
}
int main()
{
    int num = 1, xuehao, index, number, in, in_ele, delete;
    nmb *head = NULL, *tail = NULL, *p;
    scanf("%d", &xuehao);
    while (xuehao != 0)
    {
        p = (nmb *)malloc(sizeof(nmb));
        p->number = num;
        p->xuehao = xuehao;
        p->next = NULL;
        num++;
        if (head == NULL)
        {
            head = tail = p;
        }
        else
        {
            tail->next = p;
            tail = p;
        }
        scanf("%d", &xuehao);
    }
    print_list(head);

    // 寻找序号对应的学号
    scanf("%d", &index);
    search_index(index, head);

    // 寻找学号对应的序号
    scanf("%d", &number);
    search_number(number, head);

    // 插入节点
    scanf("%d %d", &in, &in_ele);
    insert_node(in, in_ele, &head);
    print_list(head);

    // 删除节点
    scanf("%d", &delete);
    delete_node(delete, &head);
    print_list(head);

    // 释放内存
    for (p = head; p != NULL;)
    {
        nmb *temp = p;
        p = p->next;
        free(temp);
    }
    /*在程序最后释放链表中所有节点的内存时，直接使用
    for(p=head; p!=NULL; p=p->next)
    {
        free(p);
    }
    会导致问题。这是因为当你调用 free(p) 之后，p 指向的内存被释放，但循环仍然会尝试将 p 移动到下一个节点 (p = p->next)。然而，在 free(p) 后，p->next 的行为是未定义的，因为 p 已经指向了已经被释放的内存区域。*/
    return 0;
}