#include<stdio.h>
#include<stdlib.h>

struct Node
{

    int data ;
    struct Node *next;
};





void search(struct Node *head , int x)
{

    int pos = 1 ;
    while (head != NULL)
    {

        if (head->data == x)
        {

            printf("element %d found at %d\n",x , pos);
            return;
        }
        head = head-> next ;
        pos++;

    }
     printf("Element %d not found in the list\n", x);
}

int main()
{

    struct Node *a= NULL;
    struct Node *b= NULL;
    struct Node *c= NULL;

    a = (struct Node*)malloc(sizeof (struct Node));
    b = (struct Node*)malloc(sizeof (struct Node));
    c = (struct Node*)malloc(sizeof (struct Node));

    a->data =10 ;
    b->data =20 ;
    c->data =30 ;

    a->next = b ;
    b->next = c ;
    c->next = NULL;

    int x ;
    scanf("%d",&x);

    search(a,x);


}
