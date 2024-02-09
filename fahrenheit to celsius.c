#include <stdio.h>

int main() {
    
int fahrenheit, celsius;
printf("enter fahrenheit: ");
scanf("%d",&fahrenheit);
celsius=(fahrenheit-32)*5/9;
printf("celsius: %d",celsius);

return 0;
}