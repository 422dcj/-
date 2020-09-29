#include<stdio.h> 
#include<stdlib.h>
 struct node
 {
  int x;
  struct node *next;
 }; 
void insert_tail(struct node *H,int p)
 {
 	struct node *q,*temp;
 	q=H;
 	while(q->next!=0){
 		q=q->next;
	 }
	 temp=(struct node *)malloc(sizeof(struct node));
	 if(temp==0)
	  return;  
	 temp->x=p;
	 temp->next=0;
	 q->next=temp;
 } 
void print(struct node *H)
 {
  struct node *p;
  p=H->next;
  while(p!=0)
  {
   printf("%d ",p->x);
   p=p->next;
  }
 }
 int main()
 {
  struct node H;
  int x;
  int i;  
  
  H.next=0;  
  
  for(i=1;i<=5;i++)
  {
   scanf("%d",&x);
   
   insert_tail(&H,x) ;
   
  }  
  
  
  print(&H);
  
  
 } 
