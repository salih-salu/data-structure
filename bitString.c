#include<stdio.h>
#include<stdlib.h>
int max=10;
void main()
{
        int u[10],a[10],b[10];
        int n,m,k;
        printf("Enter the universal set size: ");
        scanf("%d",&n);
        printf("Enter the universal set: ");
        for(int i=0;i<n;i++)
        {	
               	scanf("%d",u[i]);
        }

        printf("Enter the first set size: ");
        scanf("%d",&m);
        printf("Enter the first set: ");
        for(int i=0;i<m;i++)
        {	
        	scanf("%d",a[i]);
        }

        printf("Enter the second set size: ");
        scanf("%d",&k);
        printf("Enter the second set: ");
        for(int i=0;i<k;i++)
        {	
        	scanf("%d",b[i]);
        }
        int choice;
        while(choice!=4)
        	{
        	printf("Enter your choice \n 1.Display\n 2.Union\n 3.Intersection\n 4.Difference\n 5.exit\n :");
        	scanf("%d",&choice);
        
        	switch(choice)
        	{
        		case 1:{display();
        			break;}
        		case 2:{union(a,b);
        			break;}
        		case 3:{inter();
        			break;}
        		case 4:{diff();
        			break;}
        		case 5:{printf("\nExited........");
				break;
						}
        		default:printf("\nInvalid input");
        	};
        	}
        }

        
void Union(int arr1[],int arr2[])
{
        int i;
        for(int i=0;i<superSetSize;i++)
        {        
                bitStringUnion[i]=arr1[i]|arr2[i];
        }
}
void setIntersection(int arr1[],int arr2[])
{
	int i;
        for(int i=0;i<superSetSize;i++)
        {        
                bitStringIntersection[i]=arr1[i]&arr2[i];
        }
}       
void setDifference(int arr1[],int arr2[]){
	int i;
        for(int i=0;i<superSetSize;i++)
        { 
                printf("%d",!arr2[i]) ;     
                bitStringDifference[i]=arr1[i]&(!arr2[i]);
        }
}


