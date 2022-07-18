#include <stdio.h>
#include<stdlib.h>

#define SIZE 5

typedef struct s_linked_list
{
    int data;
    struct s_linked_list *link;
}sll;

void create_node(sll **head_arg, int data_arg);
void display(sll **head_arg);
void middle_element(sll **head_arg);

int main()
{
    sll *head = NULL;
    int data, i = 0;
    while(i++ < SIZE)
    {
        printf("Enter the data: ");
        scanf("%d", &data);
        create_node(&head, data);
    }
    display(&head);
    middle_element(&head);

    return 0;
}

void create_node(sll **head_arg, int data_arg)
{
    sll *new_node = (sll *)malloc(sizeof(sll));
    if(new_node == NULL)
    {
        printf("Memory not allocated\n");
    }
    else
    {
        new_node->data = data_arg;
        new_node->link = NULL;
        if(*head_arg == NULL)
        {
            *head_arg = new_node;
        }
        else
        {
            sll *temp = *head_arg;
            while(temp->link != NULL)
            {
                temp = temp->link;
            }
            temp->link = new_node;
        }
    }
}

void display(sll **head_arg)
{
    if(*head_arg == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        sll *temp = *head_arg;
        printf("Elements are: ");
        while(temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->link;
        }
        printf("\n");
    }
}

void middle_element(sll **head_arg)
{
    if(*head_arg == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        sll *slow_ptr = *head_arg;
        sll *fast_ptr = *head_arg;
        while(fast_ptr->link != NULL)
        {
            slow_ptr = slow_ptr->link;
            fast_ptr = fast_ptr->link->link;
        }
        printf("Middle element is %d\n", slow_ptr->data);
    }
}