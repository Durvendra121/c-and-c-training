// #include <iostream>
// using namespace std;
// struct scll{
//     int data;
//     scll*next;
// };


// scll*temp,*first,*ttemp,*p;
// void creatfirst()
// {first=new scll;
//     cin>>first->data;
//     first->next=first;
// }


// void addnodes(){
// temp=first;
//      while (temp->next!=first)
//     temp=temp->next;
//     ttemp =new scll;
//     cin>>ttemp-> data;
    
//     ttemp->next=first;
//     temp->next=ttemp;
// }



#include <iostream>
using namespace std;

struct scll {
    int data;
    scll* next;
};

scll *first = nullptr, *temp, *ttemp;

// Function to create the first node
void creatfirst() {
    first = new scll;
    cout << "Enter first node data: ";
    cin >> first->data;
    first->next = first;
}

// Function to add a new node at the end
void addnodes() {
    if (first == nullptr) {
        cout << "List not created yet. Call creatfirst() first.\n";
        return;
    }

    temp = first;
    while (temp->next != first) {
        temp = temp->next;
    }

    ttemp = new scll;
    cout << "Enter new node data: ";
    cin >> ttemp->data;

    ttemp->next = first;
    temp->next = ttemp;
}

// Function to display the circular linked list
void display() {
    if (first == nullptr) {
        cout << "List is empty.\n";
        return;
    }

    temp = first;
    cout << "Circular Linked List: ";
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != first);
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    if (n <= 0) return 0;

    creatfirst();
    for (int i = 1; i < n; i++) {
        addnodes();
    }

    display();
    return 0;
}
