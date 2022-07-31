#include<stdio.h>
void hanoiTowerMove(int num, char from, char by, char to){//from에 꽃혀있는 num개의 원반을 by를 거쳐서 to로 이동
	
	if(num==1){
		printf("원반1을 %c에서 %c로 이동 \n",from,to);
	}
	
	else{
		hanoiTowerMove(num-1,from,to,by);
		printf("원반%d %c에서 %c로 이동 \n",num,from,to);
		hanoiTowerMove(num-1,by,from,to);
	}
	
}
int main(){
	hanoiTowerMove(3,'a','b','c');
	return 0;
}