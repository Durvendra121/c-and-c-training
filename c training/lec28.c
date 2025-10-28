#include <stdio.h>
#include <string.h>
int main(){
    int arr[6]={5,2,7,9,6,5};
    int minbuy=arr[0];
    int maxp=0;

    for(int i=1;i<6;i++){
    if(arr[i]<minbuy){
        minbuy=arr[i];
        
    }else{
        int profit=arr[i]-minbuy;
        if(maxp<profit)
        {
            maxp=profit;

        }
    }
}
printf ("maximum profit is: %d",maxp);
return 0;
}