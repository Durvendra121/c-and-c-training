#include <stdio.h>

int main(){
   int arr[6]={1,2,9,5,7,3};
 int  k=3;
 int n =   sizeof (arr)/sizeof (arr[0]);

int windowsum =0;


for (int i=0; i<k;i++){
    windowsum =windowsum+arr[i];
}

int maxsum= windowsum;
for (int j=k; j<n;j++){
       windowsum= windowsum+arr[j]-arr[j-k];
        if (maxsum<windowsum){
        maxsum=windowsum;
        }
          } printf("max sum is %d",maxsum);
}  
    


