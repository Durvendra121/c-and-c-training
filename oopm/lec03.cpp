#include<iostream>
#include<cmath>
using namespace std;
int largest (int x,int y, int z){
if(x>y && x>z)
{
    return x;
}
else if(x<y && y>z)
{
    return y;
}
else{
    return z;
}
}
int main (){
int a=17, b=15,c=10;
cout <<"the largest no is"<<largest(a,b,c);
}