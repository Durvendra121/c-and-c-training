#include <iostream>
#include <iostream>
 using namespace std ;
class Demo {
   public :
   int x;
    float *y;
     Demo (){
        y=new float ;
    }
    void display (){
        cout <<" x="<<x<<" y="<<*y;

    }
};
int main (){
    Demo d;
    d.x=10;
    *(d.y)=3.5;
    Demo d2=d;
    d.display();
    d2.display();

}