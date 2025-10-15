#include<stdio.h>

int main(){
char nama[50], nim[15], ttl[50], alamat[50], hobi[50], nomor[13];
int kelas;

    printf("Nama                    : ");
    fgets(nama, sizeof(nama), stdin);
    
    printf("NIM                     : ");
    fgets(nim, sizeof(nim), stdin);
    
    printf("Kelas Paralel           : ");
    scanf("%d", &kelas);
    getchar();
    
    printf("Tempat/Tanggal Lahir    : ");
    fgets(ttl, sizeof(ttl), stdin);
    
    printf("Alamat                  : ");
    fgets(alamat, sizeof(alamat), stdin);
    
    printf("Hobby                   : ");
    fgets(hobi, sizeof(hobi), stdin);
    
    printf("No. HP                  : ");
    fgets(nomor, sizeof(nomor), stdin);
    
    printf("\nNama                    : %s", nama);
    printf("NIM                     : %s", nim);
    printf("Kelas Paralel           : %d\n", kelas);
    printf("Tempat/Tanggal Lahir    : %s", ttl);
    printf("Alamat                  : %s", alamat);
    printf("Hobby                   : %s", hobi);
    printf("No. HP                  : %s\n", nomor);
    
    return 0;
}