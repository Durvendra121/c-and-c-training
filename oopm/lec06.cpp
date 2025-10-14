#include <iostream>
using namespace std;
class demo{
    public:
    int x;
    int *y;
    demo(){
        y=new int(5);
        x=10;

    }demo(const demo &d){
        x=d.x;
        y=new int (*(d.y));

    }
    ~demo (){
        free(y);

    }void display(){
        cout<<"x="<<x<<endl;
        cout<<"y="<<*y<<endl;

    }
};
int main(){
    demo d1;

    demo d2=d1;
     d1.display();  d2.display();
    *(d2.y)=50;
    d1.display();d2.display();

}