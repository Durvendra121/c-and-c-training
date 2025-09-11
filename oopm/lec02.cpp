#include<iostream>
#include<cmath>
using namespace std;

class Ractangle{
    

public:
    int length,breadth; //attributes
Rectangle()
   {
      cout<<"came here !!";
   }
   int setLength(int L)
       {
        length=L;
       
       }
    int setBreadth(int B){
       breadth=B;

    }
   int area(){  //behavior
cout<<2*(breadth+length);
  }

};
int main()
{
Ractangle r1;
r1.setBreadth(2);
r1.setLength(3);
r1.area();

}