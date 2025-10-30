#include <iostream>
using namespace std;
void swapsll()//swap of simply link list //    
{
    
    temp=firstA;
    while (temp->next!=null)
    temp=temp->next;
    ttemp =temp->prev;
    p=ttemp->prev;
    p->next=temp;
    temp->prev=p;
    temp->next=ttemp;
    ttemp->prev=temp;
    ttemp->next=null;
    


};
