#include <stdio.h>
#include <string.h>
int main(){
    char str[]= "hello";
    int vcount =0;
    int ccount =0;
    int ln =strlen(str);
    for (int i=0;i<ln;i++){
        char ch=str[i];
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            vcount++;
        }
        else{
            ccount++;
        }}
        printf ("vowels :%d\n ",vcount);
         printf ("consonent :%d\n ",ccount);
        
}