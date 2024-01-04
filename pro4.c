#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{
        int data;
        struct node*link;
}
*top,*top1,*temp;
int main()
{
        int value,choice;
        while(choice != 4)
        {
                printf("\n1:PUSH\n2:POP\n3:DISPLAY\n4:EXIT");
                printf("\nEnter your choice:");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                        {
                                printf("Enter the number to be inserted:");
                                scanf("%d",&value);
                                push(value);
                                break;
                        }
                        case 2:
                        {
                                pop();
                                break;
                        }
                        case 3:
                        {
                                display();
                                break;
                        }
                        case 4:
                        {
                               break; 
                        }
                        default:
                        {
                                printf("Invalid option...!!!");
                        }
                }
        }        
}
void push(int element)
{
        if(top==NULL)
        {
                top=(struct node*)malloc(1*sizeof(struct node*));
                top->link=NULL;
                top->data=element;
                printf("%d inserted",element);
        }   
        else
        {
                temp=(struct node*)malloc(1*sizeof(struct node*));
                temp->link=top;
                temp->data=element;
                top=temp;
                printf("%d inserted",element);
        }     
}
void pop()
{
        top1=top;
        if(top1==NULL)
        {
                printf("Empty...!!!");
        }
        else
        {
                top1=top->link;
                printf("popped element is %d",top->data);
                free(top);
                top=top1;
        }
}
void display()
{
        top1=top;
        if(top1==NULL)
        {
                printf("Empty...!!!");
        }
        while(top1!=NULL)
        {
                printf("%d-->",top1->data);
                top1=top1->link;                
        }
        printf("NULL");
}








