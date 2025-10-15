#include<stdio.h>

int main(){
float a,b,i,j,x,y;

    scanf("%g %g %g %g %g %g", &a,&b,&i,&j,&x,&y);
    printf("%.3f\n", (a-b)*(i/j)-(x+y));
    
    return 0;
}