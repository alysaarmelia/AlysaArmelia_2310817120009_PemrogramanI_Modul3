#include <stdio.h>

int main()
{
    int bilangan;
    
    printf(""); 
    scanf("%d", &bilangan);

   
    if (bilangan >= 80) {
        printf("A");

    } else if (bilangan >= 70 && bilangan <= 79) {
        printf("B");

    } else if (bilangan >= 60 && bilangan <= 69) {
        printf("C");

    } else if (bilangan >= 50 && bilangan <= 59) {
        printf("D");

    } else {
        printf("E");
    }
return 0;
}