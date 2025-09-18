#include <stdio.h>
#include <limits.h>

int main(){
    
   int arr[6]={1,2,-9,-5,-7,3};
int maxsum=INT_MIN;
for(int i=0;i<6;i++)
{int currsum=0;
    for(int j=i;j<6;j++){
     currsum=currsum+arr[j];


if( currsum > maxsum){
maxsum=currsum;

}

}

}
printf("%d",maxsum);
}   