#include <stdio.h>

int main()
{

int bilangan;

printf("");
scanf("%d", &bilangan);

if (bilangan >= 1 && bilangan <= 10){
    printf("Satuan");
    
    }   else if (bilangan == 0){
    printf("Nol");
    
    }   else if (bilangan >= 100){
    printf("Anda mengimput Melebihi Limit Bilangan");
    
    }   else if (bilangan >= 20 && bilangan <= 99){
    printf("Puluhan");
    
    }   else {
    printf("Belasan");
}
return 0;
}