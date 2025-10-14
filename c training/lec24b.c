#include <stdio.h>
#include <string.h>
struct address{
    int pincode ;
};
struct student 
{
    char name [50];
    int roll_no;
    int age;
    struct address S2;;
};
 int main()
 {
struct student s1;
s1.S2.pincode = 123456;
s1.age=21;
printf("PINCODE IS:%d",s1.S2.pincode);
printf("\nAGE IS :%d",s1.age);

}

