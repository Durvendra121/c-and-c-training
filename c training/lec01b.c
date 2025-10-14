#include <stdio.h>
#include <stdlib.h>

int main()
{ int n;
    int arr[i];
    
    printf ("enter size of array:");
    scanf ("%d", &n);
     printf ("enter %d elements of the array \n", n);
    for(int i=0; i<n; i++)
     scanf ("%d", &arr[i]);
   
    int j=0;
    for(int i=0; i<n; i++)
     if(arr[i] == 0){
        arr[j] = arr[i];
        j++;
     }
     for(int i=j; i<n; i++)
        arr[i] = 1;
    
    



}