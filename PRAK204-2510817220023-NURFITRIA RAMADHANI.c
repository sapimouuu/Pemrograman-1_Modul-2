#include<stdio.h>
#include<math.h>

float volume(float r, float t){
float v, pi=22.0/7.0;
    v = pi*pow(r,2)*t;
    return v;
}

float luas(float r, float t){
float l, pi=22.0/7.0;
    l = 2*pi*r*(r+t);
    return l;
}

float keliling(float r){
float k, pi=22.0/7.0;
    k = 2*pi*r;
    return k;
}

int main(){
float r, t, v, l, k;

    scanf("%g", &r);
    scanf("%g", &t);
    
    v = volume(r,t);
    l = luas(r,t);
    k = keliling(r);
    
    printf("Volume = %.2f\n", v);
    printf("Luas = %.2f\n", l);
    printf("Keliling = %.2f\n", k);

    return 0;
}