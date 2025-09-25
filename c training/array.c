#include<stdio.h>
    int main (){
    int currsum=0;
    int maxsum=0;
    int arr[6]={1,4,2,3,4,5};
    int k=2;
    //int n= sizeof (arr);
    int n=sizeof arr/sizeof arr[0];

    for(int i=0;i<k;i++){
        currsum+=arr[i];}
        for(int j=k;j<n;j++){
            currsum=currsum+arr[j]-arr[j-k];
            if(currsum>maxsum){
                maxsum=currsum;
            }
        }

    printf("%d",maxsum);
    return 0;           
    }






//n*(n+1)/2