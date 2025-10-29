#include<stdio.h>
#include <string.h>
int main(){
    int arr[5]={2,4,5,4,2};
    int xor=0;
    for(int i=0;i<5;i++)
 {   xor=xor^arr[i];
}
printf("%d",xor);

}