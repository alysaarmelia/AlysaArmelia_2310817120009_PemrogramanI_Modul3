#include <stdio.h>

int main()
{
    int bernilai_satu;

    printf("");
    scanf("%d", &bernilai_satu);

    if (bernilai_satu > 0 ){
        printf("positif");

    }else if (bernilai_satu < 0){
        printf("negatif");
        
    }else if (bernilai_satu == 0)  { 
        printf("nol");
    }
return 0;
}