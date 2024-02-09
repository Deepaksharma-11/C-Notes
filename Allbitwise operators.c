#include <stdio.h>
int main() {
    int a = 12, b = 10;

//a and b are converted into 8-bits binary number, then simple AND,OR,X-OR are done between a an b
//works on truth table

    printf("a^b= %d\n",a^b); //Bitwise Exclusive OR (X-OR)
    printf("a|b= %d\n",a|b); //Bitwise OR
    printf("a&b= %d\n",a&b); //Bitwise AND
    printf("~a is = %d\n",~a);  //one's binary compliment - it takes only one operand to perform operation
    printf("Left shift of a << 2 is %d\n",a<<2); //left shift operator ( operand << n ) n is no of bits to be shifted.
    printf("Right shiff of a >> 2 is %d\n",a>>2); //right shift operator ( operand >> n) ..............
    return  0;

}