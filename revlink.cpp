#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
	
}*first=NULL;
void Display(struct Node*p)
{
	while(p!=NULL)
	{
		printf("%d",p->data);
		p=p->next;
	}
}
void create(int A[],int n)
{
	int i;
	struct Node*t,*last;
	first = (struct Node*)malloc(sizeof(struct Node));
	first->data=A[0];
	first->next=NULL;
	last=first;
	for(i=1;i<n;i++)
	{
		t=(struct Node*)malloc(sizeof(struct Node));
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}
void Reverse2(struct Node*p)
{
	struct Node*q=NULL,*r=NULL;
	while(p!=NULL)
	{
		r=p;
		q=p;
		p=p->next;
		q->next=r;
	}
	first=q;
}
int A[]={10,20,40,50,60};
create(A,5);
Reverse1(first);
Display(first);
return 0;
