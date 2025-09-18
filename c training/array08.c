

#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 2, 1};
    int isTrue = 1;  
    for (int i = 0; i < 5 / 2; i++) {
        if (arr[i] != arr[5 - i - 1]) {
            isTrue = 0;  
            break;  
        }
    }

    
    if (isTrue == 1) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}
