#include <iostream.h>
#include <stdlib.h>
#include <conio.h>

struct number                                                                        
{
  int value;
  number *next;
  number *prev;
};

void del(number **p1, number **p2, number *pc)             
{
  number *pp, *nn;

  if(pc==NULL) return;
  if((pc!=*p1) && (pc!=*p2))
  {
   pp=pc->prev;
   nn=pc->next;
   pp->next=nn;
   nn->prev=pp;
  }
   else if(pc==*p1)
   {
   *p1=(*p1)->next;
   (*p1)->prev=NULL;                                                           
   }
    else if(pc==*p2)
    {
     *p2=(*p2)->prev;
     (*p2)->next=NULL;                                                        
    }
  free(pc);

}

void printlist(number *p1)                                                     
{
  while (p1!=NULL)
  {
    cout << p1->value << " ";
    p1 = p1->next;
  }
  cout << '\n';
}


int main (void)
 {
  number *p1, *p2, *p, *pp;
clrscr();                                                                                    
  p1=new number;
  p1->value=1;
  p1->prev=NULL;
  p1->next=new number;
  p=p1->next;
  pp=p1;
  for(int i=2;i<5;i++)
  {
   p->value=i;
   p->prev=pp;
   p->next=new number;
   pp=p;
   p=p->next;
  }
  p->value=i;
  p->prev=pp;
  p->next = NULL;
  p2=p;

  printlist(p1);                                                                                 

  p=p1->next->next;                                                                         
  del(&p1, &p2, p);                                                                         

  printlist(p1);                                                                                   

  return 0;
 }