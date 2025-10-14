#include <stdio.h>
#include <string.h>
struct student 
{
    char name [50];
    int roll_no;
    int age;
};
 int main()
 {
struct student s1;
//s1 = {"Durvendra", 101, 21};
s1.age=21;
printf("%d",s1.age);

}
