#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    

} *head = NULL, *temp = NULL;
void *createnode()
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data :");
    scanf("%d", &node->data);
    node->next = NULL;
    
    return node;
}
void push()
{
    struct node *newnode = createnode();
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp->next = newnode;
        
    }
    temp = newnode;
}

void pop()
{
    if (head == NULL)
    {
        printf("Queue is empty!!!");
    }
    else
    {
    head = head->next;
    }
}

void display()
{
    struct node *dsp = head;
    while (dsp != NULL)
    {
        printf("%d", dsp->data);
        dsp = dsp->next;
    }
    printf("\n");
}

void front()
{
    printf("%d", head->data);
}

int main()
{
    push();
    push();
    push();
    push();
    display();
    pop();
    display();
    front();
}