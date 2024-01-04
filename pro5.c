#include<stdio.h>
void main()
{
        int i=0,j=0,k=0;
        int n,m;
        int a[10],b[10],c[20];
        printf("Enter the number of elements in the array1:");
        scanf("%d",&n);
        printf("Enter the number of elements in the array2:");
        scanf("%d",&m);
        printf("ENTER FIRST SORTED ARRAY\n");
        for(int x=0;x<n;x++)
        {
                printf("Enter the element%d in array1:",x+1);
                scanf("%d",&a[x]);
        }
        printf("ENTER SECOND SORTED ARRAY\n");
        for(int y=0;y<m;y++) 
        {
                printf("Enter the element%d in array2:",y+1);
                scanf("%d",&b[y]);
        }
        while(i<n && j<m)
        {
                if(a[i]>=b[j])
                {
                        c[k]=b[j];
                        k++;
                        j++;
                }
                else
                {
                        c[k]=a[i];
                        i++;
                        k++;
                }
        }
        while(i<n)
        {
                c[k]=a[i];
                k++;
                i++;
        }
        while(j<m)
        {
                c[k]=b[j];
                k++;
                j++;
        }
        for(int z=0;z<k;z++)
        {
                printf("%d",c[z]);
        }
        
}
