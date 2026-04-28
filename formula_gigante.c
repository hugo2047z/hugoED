#include <stdio.h>

int main(){
    float x,y,z,r;
    scanf("%f", &x);
    scanf("%f", &y);
    scanf("%f", &z);

    r=((((2*x)+y)/z)*((y*y*y)-z))/(((x+(2*y)+(3*z))/(z-(2*y)-(3*x)))+(x*x)+(z*z));
    printf("%f", r);
    return 0;
}