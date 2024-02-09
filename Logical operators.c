#include <stdio.h>
int main() {
    int a = 2, b = 0;
    printf("a&&b is: %d\n",a&&b); //if both the operands are non-zero/True then it will return True i.e. 1  otherwise False i.e. 0
    printf("a||b is: %d\n",a||b); //if any one of the operands is non-zero/True then it will return True i.e. 1  otherwise False i.e. 0
    printf("!a is: %d\n",!a);     //if a is non-zero/True it will reverse its value and return false as 0
    printf("!b is: %d\n",!b);     //if b is zero/False it will reverse its value and will return True as 1
    return 0;
}
