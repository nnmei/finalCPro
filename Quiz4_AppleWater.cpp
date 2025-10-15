#include <stdio.h>
int weightjud(float j1, float j2, float j3){
	return j1*j2*j3;
}
int apple(float g){
	return g*0.001;
}

int main(){
	float wa;
	float j1,j2,j3;
	printf("Input weight Apple (gram): "); scanf("%f",&wa);
	printf("Input size width water jug : "); scanf("%f",&j1);
	printf("Input size length water jug : "); scanf("%f",&j2);
	printf("Input size height water jug : "); scanf("%f",&j3);
	wa = apple(wa)*3;
	if ( weightjud(j1,j2,j3) > wa ) {
		printf("Apple can float because jug is big to enough water");
		("want water %.2f kg")
	} else
	printf("Apple can't float because jug is small to enough water");
}
