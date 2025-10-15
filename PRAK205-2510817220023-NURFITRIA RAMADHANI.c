#include<stdio.h>
#include<math.h>

float alas(float a, float b){
float c;
    c = sqrt(pow(b,2)-pow(a,2));
    return c;
}

float keliling(float a, float b, float c){
float k = a+b+c;
    return k;
}

float luas(float a, float c){
float l = (a*c)/2;
    return l;
}

int main(){
float a, b, c, k, l;

    scanf("%g", &a);
    scanf("%g", &b);
    
    c = alas(a,b);
    k = keliling(a,b,c);
    l = luas(a,c);
    
    
    printf("Alas = %g cm\n", c);
    printf("Tinggi = %g cm\n", a);
    printf("Keliling = %g cm\n", k);
    printf("Luas = %g cm^2\n", l);

    return 0;
}