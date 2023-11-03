#include <stdio.h>

int main()
{
    int diketahui;
    int hari =0;
    int jam = 0;
    int menit = 0;
    int detik = 0;

    scanf("%d", &diketahui);
    
    hari = diketahui / 86400;
    diketahui %= 86400;

    jam = diketahui/ 3600;
    diketahui %= 3600;
    
    menit = diketahui / 60;
    diketahui %= 60;

    detik = diketahui / 1;
    diketahui %= 1;

    if (hari > 0){
       printf("%d hari %02d:%02d:%02d",hari , jam , menit , detik); 
    }
    else if (jam > 0){
       printf("%02d:%02d:%02d", jam , menit , detik); 

    }else if (menit > 0){
       printf("%02d:%02d:%02d", jam , menit , detik); 
       
    }else if (detik > 0){
       printf("%02d:%02d:%02d", jam , menit , detik); 
    }
return 0;
}