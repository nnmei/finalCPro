#include <stdio.h>
calculate(float c, float t1, float t2, float t3){
	if( c < t1 && c < t2 && c < t3){
		printf("Circle in a Triangle");
	} else if ( c > t1 && c > t2 && c > t3){
		printf("Triangle in a Circle");
	} else if (  c == t1 && c == t2 && c == t3){
		printf("Triangle equals Circle");
	} else
		printf("Triangle and Circle not overlap");
	printf("\n");
}

int main(){
	float c;
	float t1, t2, t3;
	printf("Please input radius of Circle : "); scanf("%f", &c);
	printf("Please input radius Side 1 of triangle : "); scanf("%f", &t1);
	printf("Please input radius Side 2 of triangle : "); scanf("%f", &t2);
	printf("Please input radius Side 3 of triangle : "); scanf("%f", &t3);
	calculate(c,t1,t2,t3);
}