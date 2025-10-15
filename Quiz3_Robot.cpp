#include <stdio.h>
#include <string.h>
route(char w[100]){
	int i,j;
	int map[20][20]={0};
	int x =10 ,y=10;
	int minX,maxX;
	int minY,maxY;
	map[x][y] = 1;
	int length;
	length = strlen(w);
	for(i = 0; i < length; i++){
		if(w[i] == 'w' ){
			x--;
		} else if (w[i] == 's' ){
			x++;
		} else if (w[i] == 'a' ){
			y--;
		} else if (w[i] == 'd' ){
			y++;
		} else
			printf("CAN BE W A S D");

		map[x][y] = 1;
	}
	for(i=0; i < 20; i++){
		for(j=0; j < 20; j++){
			if(map[i][j] == 1) printf("*");
		else printf(" ");
		}
		printf("\n");
	}
}
int main(){
	printf("Go straight = w\nTurn around = s\nTurn left = a\nTurn right = d\n");
	char walk[100];
	printf("Please input all route in one time: "); scanf("%s",walk);
	route(walk);
}