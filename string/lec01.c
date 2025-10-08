#include <stdio.h>
#include <string.h>
int main(){
    char str[]= "hello";
    int  ln=   strlen(str);
    int count=0; 
for (int i=0;i<ln;i++){
    count=0;
    for (int j=i+1;j<ln;j++){
        if (i!=j && str[i]==str[j]){
      //  if (str[i]!=str[j]){
            count++;

        }
    }
    if (count==0){
        printf("%c",str[i]);
}
   
}
}