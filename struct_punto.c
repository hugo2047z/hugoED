#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

struct Punto{
    int x,y;

};

int main(){
    struct Punto punto[10];
    srand(time(NULL));
    int p1,p2,dx,dy,d;
    int Dx,Dy,D;

    for (int i=0; i<5; i++){
        punto[i].x=rand() % 9 + 1;
        punto[i].y=rand() % 9 + 1;
    }
    printf("que puntos quiere utilizar para calcular la distancia");
    scanf("%d %d", &p1, &p2);
    dx=(punto[p2].x-punto[p1].x);
    dx=dx*dx;
    dy=(punto[p2].y-punto[p1].y);
    dy=dy*dy;
    d=sqrt(dy+dx);

    for(int i=0; i<4; i++){
        for(int j=i+1; j<5; j++){
            Dx=(punto[i].x-punto[j].x)
        }
    }


    return 0;
}