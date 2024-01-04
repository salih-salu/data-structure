#include <stdio.h>

// set A, set B and set C and limit of set a is stored in nA and nB is the limit of set B and so on
int setA[10], setB[10], nA, nB;

// for reading two  disjoints sets A and B
void read();

// displays the current SET A and B;
void display();

// for finding union
void unionSet();

// this function returns the parent element of a set if an item is present in that set else
int find();

int main()
{
    // switch choice
    int ch;
    while (1)
    {
        printf("\nMENU");
        printf("\n1.Read\n2.Display\n3.Union\n4.Find\n99.Exit\n");
        printf("\nChoose an option: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            read();
            break;
        case 2:
            display();
            break;
        case 3:
            unionSet();
            break;
        case 4:
            find();
            break;
        case 99:
            return 0;
        default:
            printf("\nInvalid choice!!!");
            break;
        }
    }

    return 0;
}

void read()
{
    printf("\nEnter the limit of set A: ");
    scanf("%d", &nA);
    printf("Enter the elements of the disjoint set A:");
    for (int i = 0; i < nA; i++)
    {
        scanf("%d", &setA[i]);
    }

    printf("\nEnter the limit of set B: ");
    scanf("%d", &nB);
    printf("Enter the elements of the disjoint set A:");
    for (int i = 0; i < nB; i++)
    {
        scanf("%d", &setB[i]);
    }
    display();
}

void display()
{
    printf("set A: { ");

    for (int i = 0; i < nA; i++)
    {
        printf("%d ", setA[i]);
    }
    printf("}");
    printf("\nset B: { ");
    for (int i = 0; i < nB; i++)
    {
        printf("%d ", setB[i]);
    }
    printf("}");
}

// for finding union
void unionSet()
{

    int nAUB = nA + nB;
    int AUB[nAUB];
    int i, k = 0;

    for (i = 0; i < nA; i++)
    {

        AUB[i] = setA[i];
    }

    for (i = nA; i < nAUB; i++)
    {

        AUB[i] = setB[k];
        k++;
    }
    display();
    printf("\nAUB: {");
    for (i = 0; i < nAUB; i++)
    {
        printf("%d ", AUB[i]);
    }
    printf("}");
}

// this function returns the parent element of a set if an item is present in that set else
int find()
{
    int i, item;

    printf("\nEnter a item to serach: ");
    scanf("%d", &item);
    for (i = 0; i < nA; i++)
    {
        if (setA[i] == item)
        {
            printf("\n%d", setA[0]);
            return 0;
        }
    }

    for (i = 0; i < nB; i++)
    {
        if (setB[i] == item)
        {
            printf("\n%d", setB[0]);
            return 0;
        }
    }
    printf("\nItem not found!!!");
    return 0;
}
