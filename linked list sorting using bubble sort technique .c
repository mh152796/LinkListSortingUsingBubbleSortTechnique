#include<stdio.h>
#include<stdlib.h>
struct node
{

    int data;
    struct node *next;

};
struct node *head=NULL;
void insert(int data)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
        return;
    }
    struct node *temp1=head;
    while(temp1->next!=NULL)
    {
        temp1= temp1->next;
    }
    temp1->next=temp;
}
void bubleSort()
{
    struct node *temp1=head,*temp2=head;
    struct node *p=NULL,*q=NULL,*n=NULL;
    int swap;
    while(temp1->next!=NULL)
    {
        temp2 = head;
        while(temp2->next!=NULL)
        {
            p = temp2->data;
            n = temp2 ->next;
            q =n->data;
            if(p>q)
            {
                temp2->data = q;
                n->data =p;
            }
            temp2= temp2->next;
        }
        temp1= temp1->next;
    }
}
void print()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int N;

    printf("How many data you want to Input : ");
    scanf("%d",&N);
    printf("Insert %d Data : \n",N);
    while(N--)
    {
        int n;
        scanf("%d",&n);
        insert(n);
    }
    printf("Before Sort : ");
    print();
    bubleSort();
    printf("\nAfter Sort : ");
    print();
}
