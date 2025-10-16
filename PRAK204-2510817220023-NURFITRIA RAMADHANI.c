#include<stdio.h>
#include<math.h>

float volume(float jari_jari, float tinggi){
float v, pi=22.0/7.0;
    v = pi*pow(jari_jari,2)*tinggi;
    return v;
}

float luas(float jari_jari, float tinggi){
float l, pi=22.0/7.0;
    l = 2*pi*jari_jari*(jari_jari+tinggi);
    return l;
}

float keliling(float jari_jari){
float k, pi=22.0/7.0;
    k = 2*pi*jari_jari;
    return k;
}

int main(){
float jari_jari, tinggi, v, l, k;

    scanf("%g", &jari_jari);
    scanf("%g", &tinggi);
    
    v = volume(jari_jari, tinggi);
    l = luas(jari_jari, tinggi);
    k = keliling(jari_jari);
    
    printf("Volume = %.2f\n", v);
    printf("Luas = %.2f\n", l);
    printf("Keliling = %.2f\n", k);

    return 0;
}
