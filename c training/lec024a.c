#include <stdio.h>
#include <string.h>
int main(){
    int height[9]={1,2,3,5,2,5,4,3,7};
    int i=0;
    int j=8;
    int h;
    int maxarea=0;
  while(i<j)
    {
if (height[i]<height[j]){
    h=height[i];
}else{
    h=height[j];
}
    
     int w=j-i;
     int area=h*w;
if(area>maxarea){
    maxarea=area;
}
    if(height[i]<height[j]){
        i++;   
    } else {
        j--;
    }
    printf("%d ",maxarea);
}
    
}