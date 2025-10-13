#include <stdio.h>
#include <stdlib.h>

int main()
{ int n;
    printf ("enter size of array:");
    scanf ("%d", &n);
    int *arr = (int *)malloc (n * sizeof(int));

    printf ("enter %d elements of the array \n", n);
    for(int i=0; i<n; i++)
     scanf ("%d", &arr[i]);
    printf ("the elements of the array are \n");
    for(int i=0; i<n; i++)  
     printf ("%d ", arr[i]);
    



}