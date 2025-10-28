#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#define null 0

using namespace std;

struct node {
    int data;
    node* next;
};

node *first, *temp, *ttemp, *p, *q, *r, *ptemp, *pttemp,
*ntemp, *nttemp;

void init() {
    first = temp = ttemp = null;
}

void createfirst(int val) {
    first = new node;
    first->data = val;
    first->next = null;
}

void addnode(int val) {
    temp = first;

    if (temp == null) {
        createfirst(val);
        return;
    }

    while (temp->next != null) {
        temp = temp->next;
    }

    ttemp = new node;
    ttemp->data = val;
    ttemp->next = null;
    temp->next = ttemp;
} 
 
void deleteSecondLast() {
    if (first == null || first->next == null) {
        cout << "List too short to delete second-last node." << endl;
        return;
    }

    if (first->next->next == null) {
      
        temp = first;
        first = first->next;
        delete temp;
        cout << "Deleted the second-last node (was the first node in 2-node list)." << endl;
        return;
    }

    
    temp = first;
    while (temp->next->next->next != null) {
        temp = temp->next;
    }


    ttemp = temp->next;           
    temp->next = temp->next->next;  
    delete ttemp;

    cout << "Deleted the second-last node." << endl;
}

void disp() {
    temp = first;                 
    while (temp != null) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main() {
    init();
    createfirst(10);
    addnode(20);
    addnode(30);
    addnode(50);
    addnode(60);

    cout << "Original List:" << endl;
    disp();

    deleteSecondLast();

    cout << "After deleting second-last node:" << endl;
    disp();

    getch();  
    return 0;
}