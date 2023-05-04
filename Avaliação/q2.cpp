#include <stdio.h>
#include <math.h>

int main(){
	/* 2. Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no
    plano, p1(x1, y1) e p2(x2, y2) e calcule a distancia entre eles, mostrando 4 casas decimais
    apos a virgula, segundo a formula: Distancia = V(x2-x1)^2 + (y2 - y1)^2 */
    
    float x1=0,x2=0,y1=0,y2=0,distancia=0;

    printf("Insira x1 e x2 respectivamente:");
    scanf("%f %f",&x1,&x2);
    
    printf("Insira y1 e y2 respectivamente:");
    scanf("%f %f",&y1,&y2);
    
    distancia = sqrt((x2*x2) - (x1*x1)) + ((y2*y2) - (y1*y1));
	printf("%.4f",distancia);    
}
