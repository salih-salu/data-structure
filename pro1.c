#include<stdio.h>
void main()
{
        int max=2,top=-1,stack[10];
        int choice,a;
        while(choice!=4)
        {
        printf("1:push\n2:pop\n3:display\n4:exit");
        printf("\nenter your choice:\n");
        scanf("%d",&choice);
        
        switch(choice)
        {
                case 1:
                {
                                if(top==max-1)
                                {
                                        printf("Stack overflow...\n");
                                }
                                else
                                {
                                        top=top+1;
                                        printf("enter the element:");
                                        scanf("%d",&a);
                                        stack[top]=a;
                                }
                                break;
                }
                case 2:
                {
                        if(top==-1)
                        {
                                printf("Stack underflow\n");
                        }
                        else
                        {
                                int v;
                                v=stack[top];
                                top=top-1;
                        }
                        break;
                }
                case 3:
                {
                        if(top>=0)
                        {
                                printf("Elements in the stack:");
                                for(int i=top;i>=0;i--)
                                {
                                        printf("%d\t",stack[i]);
                                }
                                 printf("\n");
                        }
                        else
                        {
                                printf("The stack is empty...\n");
                        }
                        break;
                }
                case 4:
                {       printf("Exited...\n");
                        break;
                }
                default:
                {
                        printf("invalid option...!!!\n");
                }
        }
        }
}
