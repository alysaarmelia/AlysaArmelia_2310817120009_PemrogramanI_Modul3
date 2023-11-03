#include <stdio.h>

int main() 
{
    int nilai_pertama;
    int nilai_kedua;

    printf("");
    scanf("%d %d", &nilai_pertama, &nilai_kedua);

    if(nilai_pertama > nilai_kedua){
        printf("%d %d", nilai_kedua, nilai_pertama);

    } else {
        printf("%d %d", nilai_pertama, nilai_kedua);
    }
return 0;
}