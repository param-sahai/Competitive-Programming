#include <stdio.h>

#include <stdlib.h>

#include <string.h>

struct node

{

  int data;

  struct node *next;

};



void traverse(struct node *ptr)

{

  while (ptr != NULL)

  {

    printf("Element: %c\n", ptr->data);

    ptr = ptr->next;

  }

}



int main()

{

  struct node *prev,*head,*p;

  int n,i;

  char c[20];

  printf ("Enter number:");

  scanf("%s",&c);

  head=NULL;

  printf("\n\n");

  for(i=0;i<strlen(c);i++)

  {

    p=malloc(sizeof(struct node));

    p->data=c[i];

    p->next=NULL;

    if(head==NULL)

      head=p;

    else

      prev->next=p;

    prev=p;

  }

  traverse(head);

  printf("\n\nNAME = Param Sahai\nUID = 20BCS5964");

  return 0;

}