#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
}*head;
void create(int n)
{
    struct node *temp, *newnode;
    int data, i;
    head = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("Unable to allocate moemory");
    }
    else
    {
        printf("Enter the data of node 1\n");
        scanf("%d", &data);
        head->data = data;
        head->link = NULL;
    }
    temp = head;
    for (i = 2; i <= n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        if (newnode == NULL)
        {
            printf("Unable to allocate memory");
        }
        else
        {
            printf("Enter the data of node %d\n", i);
            scanf("%d", &data);
            newnode->data = data;
            newnode->link = NULL;
            temp->link = newnode;
            temp = temp->link;
        }
    }
}
void display()
{
    if (head != NULL)
    {
        struct node *p;
        p = head;
        while (p != NULL)
        {
            printf("%d\n", p->data);
            p = p->link;
        }
    }
}
// reversal of linked list
struct node *reversal(struct node *head)
{
    struct node *prevNode, *curNode;

    if (head != NULL)
    {
        prevNode = head;
        curNode = prevNode->link;
        head = head->link;
        prevNode -> link = NULL;

        while(head != NULL){
        head = head -> link;
        curNode ->link = prevNode;
        prevNode = curNode ;
        curNode = head;
        }
        head = prevNode;
        return head;
    }
}
int main()
{
    int n;
    printf("Enter the number of nodes");
    scanf("%d", &n);
    create(n);
    head = reversal(head);
    display();
    
    return 0;
    
}